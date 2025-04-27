#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<bool>> v (m,vector<bool>(n));

	int minAnswer = 64;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			char temp;
			cin >> temp;
			if (temp == 'W')
				v[i][j] = true;
			else
				v[i][j] = false;
		}
	}
	
	for (int i = 0; i <= m - 8; i++)
	{
		for (int j = 0; j <= n - 8; j++)
		{
			int current1 = 0;
			int current2 = 0;
			bool startNode = v[i][j];

			for (int x = 0; x < 8; x++)
			{
				for (int y = 0; y < 8; y++)
				{
					if (v[x + i][y + j] != (x + y) % 2 == 0 ? startNode : !startNode)
						current1++;
					else
						current2++;
				}
			}

			minAnswer = min({ minAnswer,current1,current2 });
		}
	}

	cout << minAnswer;
}