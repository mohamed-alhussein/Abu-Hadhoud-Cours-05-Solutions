//Probelm #8:Digit Frequency ,Write a program read a digit and a number that print digit frequency in that number ..
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
	return Number;}
int CountDigitFrequency(short DigitToCheck, int Number) {
	int Remendir = 0, CountFrequency = 0;
	while (Number>0)
	{
		Remendir = Number % 10;
		Number = Number / 10;
		if (Remendir==DigitToCheck)
		{
			CountFrequency++;
		}
	}
	return CountFrequency;
 }
int main() {
	int Number = ReadPositiveNumber("Please enter the main number ?");
	short DigitToCheck = ReadPositiveNumber("Pease enter one digit to check ?");
	cout << "Digit " << Number << " Freqeuncy is " << CountDigitFrequency(DigitToCheck, Number) << " Time(s)\n";
	return 0;
}