#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	if (str == "A+")
	{
		cout << 4.3f;
	}
	else if (str == "A0")
	{
		cout << "4.0";
	}
	else if (str == "A-")
	{
		cout << 3.7f;
	}
	else if (str == "B+")
	{
		cout << 3.3f;
	}
	else if (str == "B0")
	{
		cout << "3.0";
	}
	else if (str == "B-")
	{
		cout << 2.7f;
	}
	else if (str == "C+")
	{
		cout << 2.3f;
	}
	else if (str == "C0")
	{
		cout << "2.0";
	}
	else if (str == "C-")
	{
		cout << 1.7f;
	}
	else if (str == "D+")
	{
		cout << 1.3f;
	}
	else if (str == "D0")
	{
		cout << "1.0";
	}
	else if (str == "D-")
	{
		cout << 0.7f;
	}
	else
	{
		cout << "0.0";
	}
}