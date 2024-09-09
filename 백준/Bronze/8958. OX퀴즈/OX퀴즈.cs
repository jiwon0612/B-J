int input = int.Parse(Console.ReadLine());

            for (int i = 0; i < input; i++)
            {
                string OXInput = Console.ReadLine();
                int combo = 0;
                int answer = 0;

                for (int j = 0; j < OXInput.Length; j++)
                {
                    if (OXInput[j] == 'O')
                    {
                        ++combo;
                        answer += combo;
                    }
                    else
                    {
                        combo = 0;
                    }
                }

                Console.WriteLine(answer);
            }