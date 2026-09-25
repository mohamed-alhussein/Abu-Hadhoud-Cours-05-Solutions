//Problem #29:Copy Only Prime Numbers 
/*
Write a program to fill arra max size 100 with random numbers from 1 to 100 copy only prime numbers to another array ans print it ..?
*/
/*
Enter Number Of Elements ?
10
Array Elements :68 4 61 83 92 21 22 51 61 39
Prime Numbers in Array 2: 61 83
*/

#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
enum EnPrimNotPrime { Prime = 1, NotPrime = 2 };


EnPrimNotPrime CheckPrime(int Number) {
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return EnPrimNotPrime::NotPrime;
	}
	return EnPrimNotPrime::Prime;
}


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

void CopyOnlyPrimeNumber(int arr1[100], int arr2[100], int Length1, int& Length2) {
	int Counter = 0;
	for (int i = 0; i < Length1; i++)
	{
		if (CheckPrime(arr1[i]) == EnPrimNotPrime::Prime)
		{
			arr2[Counter] = arr1[i];
			Counter++;
		}
	}
	Length2 = --Counter;
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
	int arr1[100], arrLength;

	FillArrayWithRandomNumber(arr1, arrLength);

	int arr2[100], arr2Length = 0;
	cout << "Array Elements :";
	PrintArray(arr1, arrLength);

	CopyOnlyPrimeNumber(arr1, arr2, arrLength, arr2Length);

	cout << "Prime Numbers in Array 2: ";
	PrintArray(arr2, arr2Length);
	return 0;
}
