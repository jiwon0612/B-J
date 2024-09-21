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

            int answer = 0;

            for (int i = 1; i < input + 1; i++)
            {
                answer += i;
            }

            Console.WriteLine(answer);
        }

    }
}
