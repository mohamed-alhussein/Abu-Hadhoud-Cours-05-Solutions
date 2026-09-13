//Problem #3:Print Perfect Number..
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number<=0);
	return Number;
}

bool IsPerfectNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i <Number; i++)
	{
		if (Number % i == 0)
		Sum += i;

	}
	return Number == Sum;

}

void PrintResult(int Number) {
	if (IsPerfectNumber(Number))
		cout << Number << " is perfect " << endl;
	else
		cout << Number << " is not perfect " << endl;

}

int main() {
	PrintResult(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}

