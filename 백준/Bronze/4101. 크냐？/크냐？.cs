while (true)
            {
                int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

                if (input[0] == 0 && input[1] == 0)
                {
                    break;
                }

                else if (input[0] <= input[1])
                    Console.WriteLine("No");
                else
                    Console.WriteLine("Yes");
            }