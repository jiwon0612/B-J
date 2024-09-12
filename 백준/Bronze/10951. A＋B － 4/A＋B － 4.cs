while (true) // 테스트 케이스 생성
            {
                string str1 = Console.ReadLine(); // 숫자 입력받기
                if (str1 == null) // 입력칸이 비어있으면 실행 멈춤
                {
                    break;
                }
                else // 입력칸이 {숫자1} {공백} {숫자2} 면 아래 코드 (숫자1 + 숫자2) 실행
                {
                    string[] str2 = str1.Split(' '); // 배열 생성추 str1의 입력칸에 공백이 들어있기에 str2[0]에 숫자1, str2[1]에 숫자2가 들어감 
                    Console.WriteLine(int.Parse(str2[0]) + int.Parse(str2[1])); // string 형식의 배열을 int 형식으로 (더하기 위해서) 변환 후 합해서 출력
                }
            }