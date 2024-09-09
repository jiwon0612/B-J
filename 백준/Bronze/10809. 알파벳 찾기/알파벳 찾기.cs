string input = Console.ReadLine();
            int[] answer = new int[26];
            List<char> useChars = new List<char>();

            for (int i = 0; i < input.Length; i++)
            {
                if (!useChars.Contains(input[i]))
                {
                    useChars.Add(input[i]);
                    int num = (int)input[i] - 97;
                    answer[num] += i + 1;
                }
                
            }

            for (int i = 0; i < answer.Length; i++)
            {
                answer[i] += -1;
                Console.Write($"{answer[i]} ");
            }
