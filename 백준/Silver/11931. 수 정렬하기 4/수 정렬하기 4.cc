#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int num;
	cin >> num;

	vector<int> ptr;
	
	for (int i = 0; i < num; i++)
	{
		int value; 
		cin >> value;
		ptr.push_back(value);
	}

	sort(ptr.begin(), ptr.end());

	reverse(ptr.begin(), ptr.end());
	for (int i = 0; i < num; i++)
	{
		cout << ptr[i] << '\n';
	}
}