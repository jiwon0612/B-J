int num = 0;
            string input = Console.ReadLine().Trim();

            for (int i = 0; i < input.Length; i++)
            {
                if (input[i] == ' ')
                    num++;
            }

            if (input.Length == 0)
                Console.WriteLine(0);
            else
            {
                Console.WriteLine(num+1);
            }