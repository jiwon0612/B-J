int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] b = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            int[] c = new int[2];

            c[0] = a[0] + a[1] + a[2] + a[3]; //민국
            c[1] = b[0] + b[1] + b[2] + b[3]; //만세

            if (c[0] < c[1]) 
            {
                Console.WriteLine(c[1]);
            }
            else if (c[0] > c[1])
            {
                Console.WriteLine(c[0]);
            }
            else
            {
                Console.WriteLine(c[0]);
            }