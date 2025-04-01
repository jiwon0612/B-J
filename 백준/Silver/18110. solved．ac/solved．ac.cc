#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num == 0)
	{
		cout << 0;
		return 0;
	}

	vector<int> ptr;
	double percent = 0;
	double value = 0;
	int cnt = 0;

	for (int i = 0; i < num; i++) {
		int n;
		cin >> n;
		ptr.push_back(n);
	}

	percent = ((double)num * 15) / 100;

	percent = round(percent);
	
	sort(ptr.begin(), ptr.end());

	for (int i = percent ; i < num - percent; i++)
	{
		cnt++;
		value += ptr[i];
	}
	cout << round(value / (double)(cnt));
}