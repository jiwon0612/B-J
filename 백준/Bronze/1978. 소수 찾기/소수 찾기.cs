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
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int answer = 0;

            for (int i = 0; i < input; i++)
            {
                if (IsPrimeNumber(arr[i]))
                    answer++;
            }

            Console.WriteLine(answer);
        }

        private static bool IsPrimeNumber(int x)
        {
            if (x == 1 || x == 0) return false;

            for (int i = 2; i < x - 1; i++)
            {
                if (x % i == 0)
                    return false;
            }

            return true;
        }
    }
}
