#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int n, k;
	queue<int> q;

	cin >> n  >> k;

	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}

	cout << '<';
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		int value = q.front();
		q.pop();
		cout << value;

		if (q.size() >= 1)
			cout << ", ";
	}
	cout << '>';
}