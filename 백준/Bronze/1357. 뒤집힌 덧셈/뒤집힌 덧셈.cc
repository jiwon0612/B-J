#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(int num)
{
    string sNum = to_string(num);
    reverse(sNum.begin(), sNum.end());
    return stoi(sNum);
}

int main() 
{
    int x, y;
    cin >> x >> y;
    cout << rev(rev(x) + rev(y));
}