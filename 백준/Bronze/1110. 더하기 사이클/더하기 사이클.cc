#include<iostream>
#include<string>
using namespace std;

int sum(int a)
{
	int temp = a / 10;
	return temp + (a % 10);
}

int main()
{
	int num;
	cin >> num;
	int value = num;
	int cnt = 1;

	num = (num % 10) * 10 + sum(num) % 10;

	while (num != value)
	{
		cnt++;
		num = (num % 10) * 10 + sum(num) % 10;
	}

	cout << cnt;
}