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
            int[] inputArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int[] king = new int[6] { 1, 1, 2, 2, 2, 8 };

            int[] answer = new int[6];

            for (int i = 0; i < inputArr.Length; i++)
            {
                answer[i] = king[i] - inputArr[i];
                Console.Write($"{answer[i]} ");
            }

        } 

    }
}
