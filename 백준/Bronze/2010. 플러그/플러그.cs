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
            int plug = 0;

            for (int i = 0; i < input; i++)
            {
                plug += int.Parse(Console.ReadLine());
            }
            plug -= input - 1;

            Console.WriteLine(plug);
        } 

    }
}
