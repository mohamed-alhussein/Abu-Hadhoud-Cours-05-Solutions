//Problem #25:Min Of Random Array 
/*
Witer a prgram to fill array with max size 100 with random numbers from 1 to 100 ,then print Minumum Number .
*/
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;
int RandomNumber(int From, int To) {
	int randnum = rand() % (To - From + 1) + From;
	return randnum;
}
void FillArrayWithRandomNumber(int arr[100], int& Length) {
	cout << "Enter Number Of Elements ?" << endl;
	cin >> Length;
	for (int i = 0; i < Length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
int  MinNumberInArray(int arr[100], int Length) {
	int Min = 0;
	Min = arr[0];
	for (int i = 0; i < Length; i++)
	{
		if (Min > arr[i])
		{
			Min = arr[i];
		}
	}
	return Min;
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
	cout << "Arra Elements is :";
	PrintArray(arr, Length);
	cout << "Min Number is :" << MinNumberInArray(arr, Length) << endl;
	return 0;
}

