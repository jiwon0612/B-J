int input1 = int.Parse(Console.ReadLine());
            string input2 = Console.ReadLine();
            int num = 0;

            for (int i = 0; i < input1; i++)
            {
                num += int.Parse(input2[i].ToString());
            }
            Console.WriteLine(num);