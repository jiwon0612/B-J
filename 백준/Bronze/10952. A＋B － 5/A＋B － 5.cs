while (true)
            {
                int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                int a = n[0];
                int b = n[1];
                if (a==0 || b==0)
                {
                    break;
                }
                else
                {
                    Console.WriteLine(a + b);
                }
            }