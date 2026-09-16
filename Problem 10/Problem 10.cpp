//Problem #10:Print Digits In Order ,Write a porogram to read a number and print it in order from left to right..
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
int ReverseNumber(int Number) {
	int Remendir = 0, Reverse = 0;
	while (Number > 0)
	{
		Remendir = Number % 10;
		Number = Number / 10;
		Reverse = Reverse * 10 + Remendir;
	}
	return Reverse;
}
void PrintDigits(int Number) {
	int Remendir = 0;
	while (Number > 0)
	{
		Remendir = Number % 10;
		Number = Number / 10;
		cout << Remendir << endl;

	}
}
int main() {
	PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter positive number ?")));
	return 0;
}