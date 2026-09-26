//Problem #30:Sum Of 2 Arrays to a third one 
/*
Write a program to fill array two arrays with max size 100 with random numbers from 1 to 100 , Sum thrid elements in thrid array
and print the results
*/

/*
How Many Elements ?
10

Array 1 elements :
25 61 69 90 44 92 84 77 1 90

Array 2 elements :
30 77 66 79 37 96 12 39 99 69

Sum of array 1 and array 2 elements  :
55 138 135 169 81 188 96 116 100 159
*/
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<string>
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

int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumber(int arr1[100], int& arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arr1[i] = RandomNumber(1, 100);
	}
}

void SumOf2Array(int arr[100], int arr1[100], int arr2[100], int& arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = arr1[i] + arr2[i];
	}
}

void PrintArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	srand((unsigned)time(NULL));

	int arrLength = ReadPositiveNumber("How Many Elements ?");
	int arr[100], arr1[100], arr2[100];

	FillArrayWithRandomNumber(arr1, arrLength);
	FillArrayWithRandomNumber(arr2, arrLength);
	SumOf2Array(arr, arr1, arr2, arrLength);
	cout << "\nArray 1 elements :\n";
	PrintArray(arr1, arrLength);
	cout << "\nArray 2 elements :\n";
	PrintArray(arr2, arrLength);
	cout << "\nSum of array 1 and array 2 elements  :" << endl;
	PrintArray(arr, arrLength);
	return 0;
}
