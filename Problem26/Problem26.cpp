//Problem #26:Sum of Random Array 
/*
Write a program to fill array with max size 100 with random numbers from 1 to 100  ,then print sum of all number
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
int SumAllNumberInArray(int arr[100], int Length) {
	int Sum = 0;
	for (int i = 0; i < Length; i++)
	{
		Sum += arr[i];
	}
	return Sum;
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
	cout << "Sum of all number is : " << SumAllNumberInArray(arr, Length) << endl;
	return 0;
}
