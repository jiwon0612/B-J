string str = Console.ReadLine();
            string num = "";
            for (int i = 0; i < str.Length; i++)
            {
                char current = str[i];

                num += char.IsUpper(current) ? char.ToLower(current) : char.ToUpper(current);
            }

            Console.WriteLine(num);