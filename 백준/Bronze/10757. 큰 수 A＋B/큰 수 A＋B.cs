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
            string[] input = Console.ReadLine().Split();

            BigInteger num1 = BigInteger.Parse(input[0]);
            BigInteger num2 = BigInteger.Parse(input[1]);

            Console.WriteLine(num1 + num2);
        }

    }
}
