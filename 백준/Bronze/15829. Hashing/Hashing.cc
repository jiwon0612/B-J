#include<iostream>
#include<string>
using namespace std;

string str;
long long m = 1234567891;

int main()
{
	int input;
	long long hash = 0;
	cin >> input >> str;
	long long r = 1;

	for (int i = 0; i < input; i++)
	{
		hash = (hash + (str[i] - 96) * r) % m;
		r = (r * 31) % m;
	}
	cout << hash;
}