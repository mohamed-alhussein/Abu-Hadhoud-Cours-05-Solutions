//Problem #5: Print Digit in Reversed Order..
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
	} while (Number <= 0);
	return Number;
}
void PrintDigits(int Number) {
	int Remendir = 0;
	while (Number > 0)
	{
		Remendir = Number % 10;
		Number = Number / 10;
		cout << Remendir << endl;}
}
int main() {
	PrintDigits(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}
