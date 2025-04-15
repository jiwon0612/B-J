#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main()
{
	int input1, input2;
	map<string,int> m;
	cin >> input1 >> input2;

	for (int i = 0; i < input1; i++)
	{
		string s;
		cin >> s;
		m[s]++;
	}

	int cnt = 0;

	for (int i = 0; i < input2; i++)
	{
		string s;
		cin >> s;
		if (m.find(s) != m.end())
		{
			cnt++;
			m[s]++;
		}
	}

	cout << cnt << '\n';

	for (auto string : m)
	{
		if (string.second == 2)
			cout << string.first << '\n';
	}
}