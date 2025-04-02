#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	string num;
	while (true)
	{
		cin >> num;

		if (num == "0")
			break;

		string temp = num;

		reverse(temp.begin(), temp.end());
		if (temp == num)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
}