#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compar(vector<int> a, vector<int> b)
{
	if (a[1] == b[1])
		return a[0] < b[0];
	else
		return a[1] < b[1];
}

int main()
{
	int num;
	vector<vector<int>> arr;

	cin >> num;
	for (int i = 0; i < num; i++)
	{
		vector<int> n(2);
		cin >> n[0] >> n[1];
		arr.push_back(n);
	}

	sort(arr.begin(), arr.end(), compar);
	for (int i = 0; i < num; i++)
	{
		cout << arr[i][0] << ' ' << arr[i][1] << '\n';
	}
}