#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{

	while (true)
	{
		stack<char> st1;
		string input;
		getline(cin, input);
		if (input == ".")
			break;

		for (int i = 0; i < input.size(); i++)
		{
			if (input[i] == '(' || input[i] == '[')
				st1.push(input[i]);

			if (input[i] == ')')
			{
				if (!st1.empty())
				{
					if (st1.top() == '(')
					{
						st1.pop();
					}
					else
						st1.push(input[i]);
				}
				else
					st1.push(input[i]);
			}
			if (input[i] == ']')
			{
				if (!st1.empty())
				{
					if (st1.top() == '[')
					{
						st1.pop();
					}
					else
						st1.push(input[i]);
				}
				else
					st1.push(input[i]);
			}

			if (input[i] == '.')
			{
				if (st1.empty())
				{
					cout << "yes" << '\n';
					break;
				}
				else
				{
					cout << "no" << '\n';
					break;
				}
			}
		}
	}
}