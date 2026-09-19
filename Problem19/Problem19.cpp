//Problem #19:Random 3 Numbers From 1 To 10 , write a program to print 3 random numbers from 1 to 10 ...
#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

int main() {
	srand((unsigned)time(NULL));
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	return 0;
}
