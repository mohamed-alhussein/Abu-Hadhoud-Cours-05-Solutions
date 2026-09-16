//Probelm #12:Inverted number pattern ,write a program to read a number and print inverted pattern as follows 
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
int ReadPositiveNumber(string message) {
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintInvertedNumberPattern(int Number) {
	for (int i = Number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}
int main() {
	PrintInvertedNumberPattern(ReadPositiveNumber("Please enter a positive number ?"));
	return 0;
}