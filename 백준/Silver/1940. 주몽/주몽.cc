#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, m, answer = 0;

	cin >> n >> m;

	int* ptr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> ptr[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ptr[i] + ptr[j] == m)
			{
				answer++;
				break;
			}
		}
	}

	cout << answer;
}
