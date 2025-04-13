#include<iostream>
#include<string>
using namespace std;

int getDial(char c)
{
	int num = c - 'A';
	if (0 <= num && num <= 2)
		return 2;
	else if (3 <= num && num <= 5)
		return 3;
	else if (6 <= num && num <= 8)
		return 4;
	else if (9 <= num && num <= 11)
		return 5;
	else if (12 <= num && num <= 14)
		return 6;
	else if (15 <= num && num <= 18)
		return 7;
	else if (19 <= num && num <= 21)
		return 8;
	else
		return 9;
}

int main()
{
	string std;
	cin >> std;
	int answer = 0;
	for (int i = 0; i < std.size(); i++)
	{
		answer += getDial(std[i]) + 1;
	}
	cout << answer;
}