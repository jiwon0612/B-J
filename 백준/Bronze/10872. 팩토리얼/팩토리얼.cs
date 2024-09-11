using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());

            Console.WriteLine(Factorial(input));
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
