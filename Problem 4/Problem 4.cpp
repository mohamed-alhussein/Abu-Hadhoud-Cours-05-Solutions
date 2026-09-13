//Problem #4:Read N , And Print Perfect Numbers From 1 To N
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
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

void PrintPerfectNumbersFrom1ToN(int Number) {
	cout << "Pesfect Numbers From 1 To " << Number << " are :" << endl;
	for (int i = 1; i <=Number; i++)
	{
		if (IsPerfectNumber(i))
		{
			cout << i<<" ";
		}
	}

}

int main() {
	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}

