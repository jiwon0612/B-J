using System;
using System.Collections.Generic;
using System.Text;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            List<int> ansers = new List<int>();
            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < input; i++)
            {
                ansers.Add(int.Parse(Console.ReadLine()));
            }

            ansers.Sort();

            for (int i = 0; i < ansers.Count; i++)
            {
                sb.AppendLine(ansers[i].ToString());
            }

            Console.Write(sb);
        }
    }
}
