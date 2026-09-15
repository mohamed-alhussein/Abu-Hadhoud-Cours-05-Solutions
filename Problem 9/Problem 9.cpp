//Probelm #9:Digit Frequency ,Write a program read number then print digit frequency in that number ..
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
int CountDigitFrequncy(int DigitToCheck, int Number) {
	int CountFrequency = 0;
	int Remendir = 0;
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
void PrintAllDigitsFrequencyInNumber(int Number) {
	
	for ( int i = 0; i < 9; i++)
	{
		int FrequncyDigit = 0;
		FrequncyDigit = CountDigitFrequncy(i, Number);
		if (FrequncyDigit>0)
		{
			cout << "Digit " << i << " Frequency is " << FrequncyDigit << " Time(s)." << endl;
		}
	}

}
int main() {
	int Number = ReadPositiveNumber("Please enter a positive number ?");
	PrintAllDigitsFrequencyInNumber(Number);
	return 0;

}