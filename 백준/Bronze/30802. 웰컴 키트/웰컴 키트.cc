#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num;
	int bundleT;
	int bundleP;

	int size[6] = {};
	cin >> num;

	for (int i = 0; i < 6; i++)
		cin >> size[i];

	cin >> bundleT;
	cin >> bundleP;

	int cnt = 0;
	for (int i = 0; i < 6; i++)
	{
		cnt += size[i] / bundleT;
		if (size[i] % bundleT != 0)
			cnt++;
	}
	cout << cnt << '\n';

	cout << num / bundleP << " " << num % bundleP;
}