///Microsoft Visual Studio Community 2019
///version 16.10.0
///built against NET 4.0
using System;
using System.Text;
using System.IO;
namespace BitCharStreamSplitter
{
    class Program
    {
        static void Main(string[] args)
        {
            if (args.Length < 1)
            {
                Console.WriteLine("Tool for converting bits as chars to byte hex array.");
                Console.WriteLine("It converts single sequence 0011101010010000111010100100 to 0xab, 0xd2, 0xf1.");
                Console.WriteLine("Made for Arduino Talkie / Freemat firmware generator.");
                Console.WriteLine("No input filename. Exiting.");
                return;
            }
            string inputFilename = args[0];
            byte[] inputBitData = File.ReadAllBytes(inputFilename);
            if (!File.Exists(inputFilename))
            {
                Console.WriteLine("No such input file. Exiting.");
                return;
            }
            StreamWriter outputFilename = new StreamWriter(inputFilename + ".out");
            //array name is taken from input file name
            outputFilename.Write("const uint8_t " + inputFilename.Substring(0, inputFilename.IndexOf(".")) + "[] PROGMEM = {");
            byte[] block = new byte[8];
            StringBuilder hex = new StringBuilder(1);
            int numvalues = 0;
            int blockindex = 0;
            foreach (byte b in inputBitData)
            {
                if (b == 0x30 || b == 0x31) //filter non-valid chars
                    block[blockindex++] = b;
                if (blockindex == 8)
                {
                    Array.Reverse(block);
                    outputFilename.Write(hex.Clear().AppendFormat("0x{0:x2}", Convert.ToByte(Encoding.ASCII.GetString(block, 0, block.Length), 2)) + ",");
                    blockindex = 0;
                    numvalues++;
                    if (numvalues % 20 == 0) outputFilename.Write("\n");
                }
            }
            outputFilename.Write("0x03};");
            outputFilename.Flush();
            Console.WriteLine("Written " + numvalues + " hex values and " + outputFilename.BaseStream.Length + " bytes.");
            outputFilename.Close();
            Console.WriteLine("Seems to be ok. Done.");
        }
    }
}