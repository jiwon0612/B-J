int input1 = int.Parse(Console.ReadLine());
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

            Array.Sort(arr);

            Console.WriteLine($"{arr[0]} {arr[input1 -1]}");