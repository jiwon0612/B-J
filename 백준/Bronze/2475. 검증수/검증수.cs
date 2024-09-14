using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int answer = 0;

            for (int i = 0; i < 5; i++)
            {
                answer += (input[i] * input[i]);
            }

            answer = answer % 10;

            Console.WriteLine(answer);
        }

    }
}
