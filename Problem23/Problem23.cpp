//Problem #23:Fill Array With Random Numbers From 1 To 100 
/*
Write a program tp fill array with max size 100 with random numbers from 1 to 100 ?
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
	cout << "Array Elements :";
	PrintArray(arr, Length);
	return 0;

}

