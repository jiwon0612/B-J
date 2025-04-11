#include<iostream>
#include<stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	int answer = 0;
	stack<int> stack;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int n;
		cin >> n;
		if (n != 0)
			stack.push(n);
		else
			stack.pop();
	}

	while (!stack.empty())
	{
		answer += stack.top();
		stack.pop();
	}

	cout << answer;
}