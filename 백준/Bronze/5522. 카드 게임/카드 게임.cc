#include<iostream>
using namespace std;

int main()
{
	int answer = 0;

	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;

		answer += input;
	}
	cout << answer;
}