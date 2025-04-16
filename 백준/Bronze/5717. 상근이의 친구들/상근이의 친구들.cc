#include<iostream>
using namespace std;

int main()
{
	int m, f;
	int answer = 0;

	while (true)
	{
		cin >> m >> f;
		if (m == 0 && f == 0)
			break;

		cout << m + f << '\n';
	}
}