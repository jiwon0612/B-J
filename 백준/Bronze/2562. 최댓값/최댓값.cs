int[] a = new int[9];

            for (int i=0; i<9; i++)
            {
                a[i] = int.Parse(Console.ReadLine());
            }
            int m = a[0];
            int n = 1;
            for (int i = 0; i< 9; i++)
            {
                if (m<a[i])
                {
                    m = a[i];
                    n = i+1;
                }
            }
            Console.WriteLine(m);
            Console.WriteLine(n);