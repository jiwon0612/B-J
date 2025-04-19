#include<iostream>
#include<map>
using namespace std;

map<int, int> m;

int findM(int value)
{
	if (m.find(value) != m.end())
		return m[value];
	else
		return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input1, input2;
	cin >> input1;

	for (int i = 0; i < input1; i++)
	{
		int temp;
		cin >> temp;
		m[temp]++;

	}

	cin >> input2;
	for (int i = 0; i < input2; i++)
	{
		int temp;
		cin >> temp;
		cout << findM(temp) << " ";
	}
}