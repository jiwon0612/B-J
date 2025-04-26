#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	string input;
	vector<int> v;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		v.push_back(input[i] - '0');
	}

	sort(v.begin(), v.end());

	for (int i = v.size() - 1; i >= 0 ; i--)
	{
		cout << v[i];
	}
}