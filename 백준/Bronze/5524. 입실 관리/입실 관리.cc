#include<iostream>
#include<string>
using namespace std;

int main()
{
	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			s[i] = tolower(s[i]);
		}
		cout << s << '\n';
	}
}