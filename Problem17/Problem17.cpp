//Problem #17:Guess A 3-Letter Password,
#include<iostream>
#include<string>
using namespace std;
string ReadPasswword() {
	string Password = " ";
	cout << "Please enter a 3-letter password (all capital)?" << endl;
	cin >> Password;
	return Password;
}



bool GuessPassword(string Password) {

	string Word = " ";
	int Count = 0;

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Word = Word + char(i);
				Word = Word + char(j);
				Word = Word + char(k);
				Count++;

				cout << "Trial[" << Count << "] : " << Word << endl;

				if (Word == Password)
				{
					cout << "Password is " << Word << endl;
					cout << "Found after " << Count << " Trial(s) " << endl;
					return true;
				}
				Word = " ";
			}
		}
	}
	return false;
}


int main() {
	GuessPassword(ReadPasswword());
	return 0;
}
