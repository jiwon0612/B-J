int input = int.Parse(Console.ReadLine());
            int[] input2 = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
            float answer = 0;
            

            int maxNum = input2[0];

            Array.Sort(input2);
            maxNum = input2[input - 1];

            for (int i = 0; i < input2.Length; i++)
                answer += input2[i];

            answer = answer / maxNum * 100;

            answer = answer / input;

            Console.WriteLine(answer);