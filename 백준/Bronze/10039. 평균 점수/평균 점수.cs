int max = 0;
            for (int i = 0; i < 5; i++)
            {
                int num = int.Parse(Console.ReadLine());

                if (num < 40)
                    num = 40;

                max += num;
            }
            Console.WriteLine(max / 5);