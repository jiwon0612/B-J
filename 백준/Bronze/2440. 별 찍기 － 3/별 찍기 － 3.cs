int n = int.Parse(Console.ReadLine());
            for (int i=0; i<n; i++)
            {
                for (int t=0; t<n-i;t++)
                {
                    Console.Write("*");
                }
                Console.WriteLine(" ");
            }