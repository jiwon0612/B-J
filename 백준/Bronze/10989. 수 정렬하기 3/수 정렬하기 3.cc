#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num1;
	cin >> num1;
	vector<int> v(10001);
	
	for (int i = 0; i < num1; ++i)
	{
		int n;
		cin >> n;
		v[n - 1]++;
	}

	for (int i = 0; i < 10001; ++i)
	{
		for (int j = 0; j < v[i]; ++j)
		{
			cout << i + 1 << '\n';
		}
	}
}