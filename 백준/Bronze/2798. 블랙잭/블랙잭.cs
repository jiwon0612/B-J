using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] input1 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] input2 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            int answer = 0;

            for (int i = 0; i < input2.Length; i++)
            {
                for (int j = i + 1; j < input2.Length ; j++)
                {
                    for (int k = j + 1; k < input2.Length; k++)
                    {
                        int num = input2[i] + input2[j] + input2[k];

                        if (num <= input1[1])
                        {
                            answer = num > answer ? num : answer;
                        }   
                    }
                }
            }

            Console.WriteLine(answer);
        }
    }
}
