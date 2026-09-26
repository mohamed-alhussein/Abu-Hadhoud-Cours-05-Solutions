
//Problem #31:Shuffle Ordered Array 
/*
Write a program to fill array with ordered numbers from 1 to N ,then print it , after that  shuffle this
array and print it after shuffle ?
*/

/*

Enter Number Of Elements ?
10

Array elements befor shuffle :
1 2 3 4 5 6 7 8 9 10

Array elements after shuffle :
1 4 3 5 7 6 10 9 2 8

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
void SwapNumber(int& A, int& B) {
	int Temp = A;
	A = B;
	B = Temp;
}
void FillArrayWith1ToN(int arr[100], int& arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}
}
void ShuffleArray(int arr[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		SwapNumber(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
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
	int arr[100];
	int arrLength = ReadPositiveNumber("Enter Number Of Elements ?");
	FillArrayWith1ToN(arr, arrLength);
	cout << "\nArray elements befor shuffle :\n";
	PrintArray(arr, arrLength);

	ShuffleArray(arr, arrLength);

	cout << "\nArray elements after shuffle :\n";
	PrintArray(arr, arrLength);
	return 0;
}
