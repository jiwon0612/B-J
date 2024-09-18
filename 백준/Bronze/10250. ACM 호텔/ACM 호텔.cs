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
            int input = int.Parse(Console.ReadLine());

            for (int i = 0; i < input; i++)
            {
                int[] input2 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                int h = input2[0];
                int w = input2[1];
                int n = input2[2];

                int y = n % h;
                int x = n / h;

                if (y == 0)
                    y = h;
                else
                    x += 1;

                Console.WriteLine(y * 100 + x);
            }
        }

    }
}
