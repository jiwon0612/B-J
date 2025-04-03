#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	queue<int> que;
	for (int i = 1; i <= n; i++)
	{
		que.push(i);
	}

	cout << '<';

	while (!que.empty())
	{
		for (int i = 0; i < k; i++)
		{
			if (i == k - 1)
			{
				if (que.size() != 1)
					cout << que.front() << ", ";
				else
					cout << que.front();
				que.pop();
			}
			else
			{
				int temp = que.front();
				que.pop();
				que.push(temp);
			}
		}
	}
	cout << '>';
}