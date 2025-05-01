#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct XY
{
	int x;
	int y;

	XY(int a, int b) : x(a), y(b) {};
};

int main()
{
	int n;
	vector<XY> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back(XY(x, y));
	}

	for (int i = 0; i < n; i++)
	{
		int cnt = 1;

		for (int j = 0; j < n; j++)
		{
			if (j == i)
				continue;
			if (v[i].x >= v[j].x && v[i].y <= v[j].y)
				continue;
			else if (v[i].x <= v[j].x && v[i].y >= v[j].y)
				continue;
			else if (v[i].x > v[j].x && v[i].y > v[j].y)
				continue;
			else
				cnt++;
		}
		cout << cnt << " ";
	}
}