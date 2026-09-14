//Problem #7: Reverse Number ,Write a program to read number and print it reversed ..
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
int main() {
	cout << "Revers is:\n" << ReverseNumber(ReadPositiveNumber("Please enter a positive number ?")) << "\n";
	return 0;
}
