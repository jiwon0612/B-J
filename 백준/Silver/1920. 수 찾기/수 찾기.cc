#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool serch(int* v, int num, int size)
{
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (v[mid] == num)
		{
			return true;
		}
		else if (v[mid] > num)
		{
			high = mid - 1;
		}
		else if (v[mid] < num)
		{
			low = mid + 1;
		}
	}

	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	//vector<int> v;
	cin >> num;

	int* ptr = new int[num];

	for (int i = 0; i < num; ++i)
	{
		cin >> ptr[i];
	}

	sort(ptr, ptr + num);

	int num2;
	cin >> num2;

	for (int i = 0; i < num2; i++)
	{
		int n;
		cin >> n;
		if (serch(ptr, n, num))
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
}