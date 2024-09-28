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
            int answer = 0;
            int[] arr = new int[2];

            for (int i = 0; i < 9; i++)
            {
                int[] num = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                for (int j = 0; j < num.Length; j++)
                {
                    if (num[j] >= answer)
                    {
                        answer = num[j];
                        arr[0] = i;
                        arr[1] = j;
                    }
                }

            }
            Console.WriteLine(answer);
            Console.WriteLine($"{arr[0] + 1} {arr[1] + 1}");

        }
    }
}
