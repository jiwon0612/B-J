int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            Array.Sort(input);

            Console.WriteLine($"{input[0]} {input[1]} {input[2]}");