//Problem #27:Average Of Random Array ,
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100 ,then print average of all number
*/
/*
Enter Number Of Elements ?
10
Array Elements is :87 70 12 59 98 77 12 83 60 86
Averag of all number is : 64.4
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

void FillArrayWithRandomNumber(int arr[100], int& Length) {
	cout << "Enter Number Of Elements ?" << endl;
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

int SumArray(int arr[100], int Length) {
	int Sum = 0;
	for (int i = 0; i < Length; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
float AverageArray(int arr[100], int Length) {
	return (float)SumArray(arr, Length) / Length;
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
	int arr[100], Length;
	FillArrayWithRandomNumber(arr, Length);
	cout << "Array Elements is :";
	PrintArray(arr, Length);
	cout << "Averag of all number is : " << AverageArray(arr, Length) << endl;
	return 0;
}
