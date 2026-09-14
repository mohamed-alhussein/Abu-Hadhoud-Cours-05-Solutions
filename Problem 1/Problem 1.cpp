//Problem #1: Multiplication Table 1 to 10 , Write a program print the mulitiplication table from 1 to 10
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;
void PrintTableHedar() {
	cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";
	cout << "\t";
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";

	}
	cout << "\n-----------------------------------------------------------------------------------\n";
}

string ColumSeperater(int i) {
	if (i < 10)
		return "   |";
	else
		return "  |";

}

void PrintMultiplicationTable() {
	PrintTableHedar();
	for (int i = 1; i <=10; i++)
	{
		cout << " " << i << ColumSeperater(i)<<"\t";
		for (int j = 1; j <=10 ; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;

	}

}


int main() {
	PrintMultiplicationTable();
	return 0;

}


