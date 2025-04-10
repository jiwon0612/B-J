#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	int n5;
	int n25;
	int n125;

	cin >> num;

	n5 = num / 5;
	n25 = num / 25;
	n125 = num / 125;

	cout << n5 + n25 + n125;

}