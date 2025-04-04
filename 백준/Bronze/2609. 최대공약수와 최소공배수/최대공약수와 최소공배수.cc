#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	int max = 0;
	int min = 0;

	if (x < y)
	{
		int temp = y;
		y = x;
		x = temp;
	}
	for (int i = x; i > 0; --i)
	{
		int a = x % i;
		int b = y % i;

		if (a == 0 && b == 0)
		{
			max = i;
			break;
		}
	}

	int cnt = 1;
	while (true)
	{
		int value = x * cnt;
		if (value % y == 0)
		{
			min = value;
			break;
		}
		else
			cnt++;
	}
	cout << max << '\n' << min;
}