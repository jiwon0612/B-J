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
            int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int[] ascending = new int[8] { 1, 2, 3, 4, 5, 6, 7, 8 };
            int[] descending = new int[8] { 8, 7, 6, 5, 4, 3, 2, 1, };

            if (input.SequenceEqual(ascending))
                Console.WriteLine("ascending");
            else if (input.SequenceEqual(descending))
                Console.WriteLine("descending");
            else
                Console.WriteLine("mixed");
        }

    }
}
