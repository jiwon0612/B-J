#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int input;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		string str;
		cin >> str;
		int cnt = 0;
		bool isFalse = false;

		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
			{
				cnt++;
			}
			else
			{
				cnt--;
				if (cnt < 0)
				{
					isFalse = true;
					break;
				}
			}
		}
		if (cnt == 0 && !isFalse)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';

	}
}