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

            for (int i = input; i > 0; i--)
            {
                builder.AppendLine(i.ToString());
            }
            Console.WriteLine(builder);
        }
    }   
}