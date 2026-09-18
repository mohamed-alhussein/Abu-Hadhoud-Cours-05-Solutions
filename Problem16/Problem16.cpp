//Problem #16: Print all word from AAA to ZZZ.
#include<iostream>
#include<string>
using namespace std;
void PrintAllWordsFrom_AAATo_ZZZ() {
	string Word = " ";
	for (int i = 65; i <=90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Word = Word + char(i);
				Word = Word + char(j);
				Word = Word + char(k);
				cout << Word << endl;
				Word = " ";
			}
		}
		cout << "--------------------------\n";
	}
}
int main() {
	PrintAllWordsFrom_AAATo_ZZZ();
	return 0;
}