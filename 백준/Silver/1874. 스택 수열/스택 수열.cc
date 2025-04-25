#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int input;
	stack<int> st;
	int cnt = 0;
	bool isBreak = false;
	string answer;

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		int value;
		cin >> value;

		while (value > cnt)
		{
			cnt++;
			st.push(cnt);
			answer += "+ \n";
		}

		if (value == st.top())
		{
			st.pop();
			answer += "- \n";
		}
		else if (value < st.top())
		{
			isBreak = true;
			break;
		}
	}

	if (!isBreak)
		cout << answer;
	else
		cout << "NO";
}