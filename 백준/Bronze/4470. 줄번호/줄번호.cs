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
            int input = int.Parse(Console.ReadLine());
            StringBuilder stb = new StringBuilder();

            for (int i = 0; i < input; i++)
            {
                stb.AppendLine($"{i + 1}. {Console.ReadLine()}");
            }

            Console.WriteLine(stb);
        }

    }
}
