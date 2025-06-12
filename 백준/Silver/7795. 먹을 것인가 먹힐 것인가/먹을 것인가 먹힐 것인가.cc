#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, m;
		int answer = 0;
		cin >> n >> m;

		int* a = new int[n];
		int* b = new int[m];

		for (int i = 0; i < n; i++)
			cin >> a[i];

		for (int i = 0; i < m; i++)
			cin >> b[i];

		sort(b, b + m);

		for (int i = 0; i < n; i++)
		{
			int* lo = lower_bound(b, b + m, a[i]);
			answer += lo - b;
		}

		cout << answer << '\n';

		delete[] a;
		a = nullptr;
		delete[] b;
		b = nullptr;
	}
}