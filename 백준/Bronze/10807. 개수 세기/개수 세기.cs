sbyte a = sbyte.Parse(Console.ReadLine());
            //총 정수 갯수
            sbyte[] b = Array.ConvertAll(Console.ReadLine().Split(), sbyte.Parse);
            //정수들
            sbyte c = sbyte.Parse(Console.ReadLine());
            //찾을 정수
            sbyte d = 0;
            //찾은정수 저장

            for (int i = 0; i < a; i++)
            {
                if (b[i] == c)
                {
                    d += 1;
                }
            }

            Console.WriteLine(d);
