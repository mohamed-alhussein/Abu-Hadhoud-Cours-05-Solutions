//Problem #21:Generate Key,Write a program  to read how many keys to generate and print them on the screen . 
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
enum EnCharType { SmallLetter = 1, CapitalLetter = 2, Special = 3, Digit = 4 };
int ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int RandomNumber(int From, int To) {
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

char GetCharType(EnCharType CharType) {
	switch (CharType)
	{
	case EnCharType::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case EnCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case EnCharType::Special:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case EnCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}
	default:
		return '\0';
		break;
	}
}
string GetWord(EnCharType CharType, int length) {
	string Word = "";
	for (int i = 0; i < length; i++)
	{
		Word = Word + GetCharType(CharType);
	}
	return Word;
}

string GetGenrateKey() {
	string Key = " ";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4) + "-";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4) + "-";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4) + "-";
	Key = Key + GetWord(EnCharType::CapitalLetter, 4);
	return Key;
}

void GetGenrateKeys(int NumberofKeys) {
	for (int i = 1; i <= NumberofKeys; i++)
	{
		cout << "Key [" << i << "] : " << GetGenrateKey() << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));
	GetGenrateKeys(ReadPositiveNumber("Please enter how many keys to generate ?"));
	return 0;
}
