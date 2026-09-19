//Problem #20:Witer a program to print random small letter , Capital letter ,special charater , and Digit in odrer ..
/*
ASCII Table:
Small Letter(97,122)
Capital Letter(65,90)
Special Character(33,47)
Digit(48,57)
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}
enum EnCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
char GetRandomCharacter(EnCharType CharType) {
	switch (CharType)
	{
	case EnCharType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case EnCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case EnCharType::SpecialCharacter:
		return char(RandomNumber(33, 47));
		break;
	case EnCharType::Digit:
		return char(RandomNumber(48, 57));
		break;
	default:
		return '\0';
		break;
	}
}
int main() {
	srand((unsigned)time(NULL));
	cout << GetRandomCharacter(EnCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(EnCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(EnCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(EnCharType::Digit) << endl;
	return 0;
}
