using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger input1 = BigInteger.Parse(Console.ReadLine());
            BigInteger input2 = BigInteger.Parse(Console.ReadLine());

            Console.WriteLine(input1 + input2);
            Console.WriteLine(input1 - input2);
            Console.WriteLine(input1 * input2);
        }

    }
}
