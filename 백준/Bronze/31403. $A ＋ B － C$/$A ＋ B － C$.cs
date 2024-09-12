string input1 = Console.ReadLine();
            string input2 = Console.ReadLine();
            int input3 = int.Parse(Console.ReadLine());

            int num1 = 0;
            int num2 = 0;

            num1 = int.Parse(input1) + int.Parse(input2) - input3;
            num2 = int.Parse(input1 + input2) - input3;

            Console.WriteLine(num1);
            Console.WriteLine(num2);