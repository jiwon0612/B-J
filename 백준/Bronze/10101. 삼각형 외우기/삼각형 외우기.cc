#include<iostream>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;
	if (a + b + c != 180)
	{
		cout << "Error";
	}
	else if (a == 60 && a == b && c == b)
	{
		cout << "Equilateral";
	}
	else if (a == b || a == c || c == b)
		cout << "Isosceles";
	else
		cout << "Scalene";
}