#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	std::cout.tie(NULL);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << a + b << '\n';
	}
}