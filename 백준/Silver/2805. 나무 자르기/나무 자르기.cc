#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<long long> tree(n);

	for (int i = 0; i < n; i++)
	{
		cin >> tree[i];
	}

	sort(tree.begin(), tree.end());
	
	long long left = 1, right = tree.back(), cutteing, sum;
	long long result = 0;

	while (left <= right)
	{
		cutteing = (left + right) / 2;
		sum = 0;

		for (int i = 0; i < tree.size(); i++)
		{
			if (tree[i] > cutteing)
			{
				sum += tree[i] - cutteing;
			}
		}

		if (sum >= m)
		{
			result = cutteing;
			left = cutteing + 1;
		}
		else
			right = cutteing - 1;
	}

	cout << result;
}