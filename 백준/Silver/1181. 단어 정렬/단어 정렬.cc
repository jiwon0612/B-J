#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;

	return a.length() < b.length();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num;
	vector<string> v;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		string n;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end(), compare);

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << '\n';
	}
}