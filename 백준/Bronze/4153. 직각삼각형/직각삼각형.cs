 while(true)
            {
                int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
                if (n[0]==0|| n[1] == 0 || n[2] == 0)
                {
                    break;
                }
                else if (n[0]*n[0]+n[1]*n[1]==n[2]*n[2])
                {
                    Console.WriteLine("right");
                }
                else if (n[2] * n[2] + n[1] * n[1] == n[0] * n[0])
                {
                    Console.WriteLine("right");
                }
                else if (n[0] * n[0] + n[2] * n[2] == n[1] * n[1])
                {
                    Console.WriteLine("right");
                }
                else
                {
                    Console.WriteLine("wrong");
                }
            }