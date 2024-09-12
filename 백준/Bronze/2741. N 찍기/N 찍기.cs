using System;
using System.Text;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = int.Parse(Console.ReadLine());
            StringBuilder stringNum = new StringBuilder();
            for (int i = 1; i <= num; i++)
            {
                stringNum.AppendLine(i.ToString());
            }
            Console.WriteLine(stringNum);
        }
    }
}
