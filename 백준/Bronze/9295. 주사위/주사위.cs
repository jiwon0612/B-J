using System;
using System.Text;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            StringBuilder builder = new StringBuilder();

            for (int i = 0; i < input; i++)
            {
                int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                builder.AppendLine($"Case {i + 1}: {arr[0] + arr[1]}");
            }
            Console.WriteLine(builder);
        }
    }
}
