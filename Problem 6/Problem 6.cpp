
,,
//Problem #6:Sum Of Digits ,Write a program to read number and print the sum of  its digits. 
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
int SumOfDigits(int Number) {
	int Sum = 0, Remandir = 0;
	while (Number>0)
	{
		Remandir = Number % 10;
		Number = Number / 10;
		Sum += Remandir;
	}
	return Sum;
}
int main() {
	cout << "The Sum Of Digits = " << SumOfDigits(ReadPositiveNumber("Please enter a positive number ?")) << "\n";
	return 0;
}

