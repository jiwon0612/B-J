#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
	int num;
	queue<int> q;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		q.push(i + 1);
	}

	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();

		if (!q.empty())
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
	}
}