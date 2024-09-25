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
            string answer = "";
            for (int i = 0; i < 3; i++)
            {
                int input = int.Parse(Console.ReadLine());

                BigInteger num = new BigInteger();

                for (int j = 0; j < input; j++)
                {
                    num += BigInteger.Parse(Console.ReadLine());
                }

                switch ((int)num.Sign)
                {
                    case 1:
                        answer += "+";
                        break;
                    case -1:
                        answer += "-";
                        break;
                    default:
                        answer += 0;
                        break;
                }
            }

            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine(answer[i]);
            }


        } 

    }
}
