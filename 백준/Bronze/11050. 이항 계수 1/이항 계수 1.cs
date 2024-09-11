using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int n = input[0];
            int k = input[1];

            int answer = Factorial(n) / (Factorial(k) * Factorial(n - k));

            Console.WriteLine(answer);

        }

        static int Factorial(int num)
        {
            int n = num;

            if (n == 0) return 1;

            for (int i = 1; i < num; i++)
            {
                n *= i;
            }

            return n;
        }
    }
}
