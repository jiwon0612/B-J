using System;
using System.Collections.Generic;
using System.Numerics;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace Baekjoon
{
    struct AgeName
    {
        public int Age;
        public string Name;

        public AgeName(int age, string name)
        {
            Age = age;
            Name = name;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            List<AgeName> ageNames = new List<AgeName>();
            StringBuilder strBuilder = new StringBuilder();


            for (int i = 0; i < input; i++)
            {
                string[] arrInput = Console.ReadLine().Split();
                AgeName ageName = new AgeName(int.Parse(arrInput[0]), arrInput[1]);

                ageNames.Add(ageName);
            }

            ageNames = ageNames.OrderBy(x => x.Age).ToList();

            ageNames.ToList().ForEach(x => Console.WriteLine($"{x.Age} {x.Name}"));
        }
    }
}
