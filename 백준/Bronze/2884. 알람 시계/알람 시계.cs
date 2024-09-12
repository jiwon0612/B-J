int[] a = Array.ConvertAll(Console.ReadLine().Split(),int.Parse);
            int b = 0;

            if (a[1]-45<0)
            {
                a[1] = a[1] + 60 - 45;
                ++b;
            }
            else
            {
                a[1] = a[1] - 45;
            }

            if (b==1 && a[0]-1<0)
            {
                a[0] = a[0] + 24 - 1;
            }
            else if (b==1)
            {
                a[0] = a[0] - 1;
            }

            Console.WriteLine(a[0]+" "+a[1]);