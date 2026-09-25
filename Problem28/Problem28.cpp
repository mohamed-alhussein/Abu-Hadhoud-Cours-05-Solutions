//Problem #28:Copy Arra,
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100 ,Copy it to another array and print it
*/

/*
Enter Number Of Elements ?
10
Array 1 elements :51 39 86 93 11 79 87 67 68 82
Array 2 elements after copy :51 39 86 93 11 79 87 67 68 82
*/
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumber(int arr1[100], int& arrLength) {
	cout << "Enter Number Of Elements ?" << endl;
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr1[i] = RandomNumber(1, 100);
	}
}

void CopyArray(int arr2[100], int arr1[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr1[i];
	}
}

void PrintArray(int arr[100], int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100], arrLength;
	FillArrayWithRandomNumber(arr1, arrLength);
	cout << "Array 1 elements :";
	PrintArray(arr1, arrLength);
	CopyArray(arr2, arr1, arrLength);
	cout << "Array 2 elements after copy :";
	PrintArray(arr2, arrLength);
	return 0;
}
