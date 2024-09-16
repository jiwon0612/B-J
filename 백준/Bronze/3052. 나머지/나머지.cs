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
            List<int> numList = new List<int>();
            int answer = 0;

            for (int i = 0; i < 10; i++)
            {
                int input = int.Parse(Console.ReadLine());

                input %= 42;

                if (!numList.Contains(input))
                {
                    answer++;
                    numList.Add(input);
                }
                
            }

            Console.WriteLine(answer);
        }

    }
}
