#include<iostream>
using namespace std;

int main()
{
	int a, b, n;
	cin >> a >> b >> n;

    a = a % b;

    for (int i = 0; i < n; ++i) {
        a *= 10;
        int digit = a / b;
        a %= b;
        if (i == n - 1)
            cout << digit << endl;
    }
}