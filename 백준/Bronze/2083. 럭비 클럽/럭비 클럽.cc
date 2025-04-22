#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct member
{
	string name;
	int age;
	int gram;
};

int main()
{
	vector<string> s;

	while (true)
	{
		member a;
		cin >> a.name >> a.age >> a.gram;

		if (a.name == "#" && a.age == 0 && a.gram == 0)
			break;

		if (a.age > 17 || a.gram >= 80)
			s.push_back(a.name + " Senior" );
		else
			s.push_back(a.name +" Junior");
	}

	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << '\n';
	}
}