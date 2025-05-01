#include <iostream>
#include <string>
using namespace std;

bool isNum(string n)
{
	if (n == "Fizz")
	{
		return false;
	}
	else if (n == "Buzz")
	{
		return false;
	}
	else if (n == "FizzBuzz")
	{
		return false;
	}
	return true;
}

string sToFizzBuzz(int n)
{
	if (n % 3 == 0 && n % 5 == 0)
		return "FizzBuzz";
	else if (n % 3 == 0 && n % 5 != 0)
		return "Fizz";
	else if (n % 3 != 0 && n % 5 == 0)
		return "Buzz";
	else
		return to_string(n);
}

int main()
{
	string input1, input2, input3;
	int answer;

	cin >> input1 >> input2 >> input3;

	if (isNum(input3))
		answer = stoi(input3) + 1;
	else if (isNum(input2))
		answer = stoi(input2) + 2;
	else
		answer = stoi(input1) + 3;

	cout << sToFizzBuzz(answer);
}