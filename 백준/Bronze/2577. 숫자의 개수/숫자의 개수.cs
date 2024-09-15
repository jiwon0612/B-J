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
            int input1 = int.Parse(Console.ReadLine());
            int input2 = int.Parse(Console.ReadLine());
            int input3 = int.Parse(Console.ReadLine());

            int[] answer = new int[10];

            string num = (input1 * input2 * input3).ToString();

            for (int i = 0; i < num.Length; i++)
            {
                answer[int.Parse(num[i].ToString())]++;
            }

            for (int i = 0; i < answer.Length; i++)
            {
                Console.WriteLine(answer[i]);
            }
        }

    }
}
