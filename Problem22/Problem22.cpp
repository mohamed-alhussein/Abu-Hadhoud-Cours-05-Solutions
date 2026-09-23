//Problem #22:Repeated Elements Count In Array ,
/*
Write a program to read N elementsand store them in array then print all array  elements
and ask for a number to check , then print how many number a certain elements repeted in that array ..
*/

/*
Enter array elements :
5
Element [1] :1
Element [2] :1
Element [3] :1
Element [4] :2
Element [5] :3
Enter the number you want to check :
1
Original array :1 1 1 2 3
Number 1 is repeated 3 time(s)
*/

#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
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

void ReadElementsArray(int arr[100], int& length) {
	cout << "Enter array elements :" << endl;
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		cout << "Element [" << i + 1 << "] :";
		cin >> arr[i];
	}
}

void PrintElementsArray(int arr[100], int length) {
	cout << "Original array :";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int RepeatedTimes(int arr[100], int& length, int Numbertocheck) {
	int Count = 0;
	for (int i = 0; i < length; i++)
	{
		if (Numbertocheck == arr[i])
		{
			Count++;
		}
	}
	return Count;
}
int main() {
	int Length;
	int arr[100];
	ReadElementsArray(arr, Length);
	int NumberToCheck = ReadPositiveNumber("Enter the number you want to check :");
	PrintElementsArray(arr, Length);
	cout << "Number " << NumberToCheck << " is repeated " << RepeatedTimes(arr, Length, NumberToCheck) << " time(s)" << endl;
	return 0;
}

