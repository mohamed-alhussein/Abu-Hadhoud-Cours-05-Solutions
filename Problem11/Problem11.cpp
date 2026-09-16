//Problem #11:Palindrom Number ,Write a program to read a number and check if it is palindrom ?
//Note:Palindrom is a number that reads the same from right to left .
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
	} while (Number<=0);
	return Number;
}
int ReverseNumber(int Number) {
	int Remendir = 0;
	int Number2 = 0;
	while (Number>0)
	{
		Remendir = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remendir;
	}
	return Number2;
}
bool IsPalindromNumber(int Number) {
	return Number == ReverseNumber(Number);

}
int main() {
	int Number = ReadPositiveNumber("Please enter  a positive number ?");
	if (IsPalindromNumber(Number))
		cout << "Yas,it is a palindrom number ... " << endl;
	else
		cout << "No,it is Not a palindrom number ..." << endl;
	return 0;
}
