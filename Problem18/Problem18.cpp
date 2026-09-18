//Problem #18: Encrypt/Decrypt Text ,Write a program to read a text and encrypt it ,decrypt it 
/*
Please enter text ?
mohamed alhosen

Text Befor Encryption :mohamed alhosen
Text After Encryption :oqjcogf"cnjqugp
Text After Decryption :mohamed alhosen
*/

#include<iostream>
#include<string>
using namespace std;
string ReadText() {
	string Text = " ";
	cout << "Please enter text ?" << endl;
	getline(cin, Text);
	return Text;
}

string TextEncrypt(string Text, short EncryptionKey) {

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}

string TextDecrypt(string Text, short EncryptionKey) {

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main() {
	const short EncryptionKey = 2;
	string Text = ReadText();
	string TextAfterEncrypt, TextAfterDecrypt;
	TextAfterEncrypt = TextEncrypt(Text, EncryptionKey);
	TextAfterDecrypt = TextDecrypt(TextAfterEncrypt, EncryptionKey);
	cout << "\n";
	cout << "Text Befor Encryption :" << Text << endl;
	cout << "Text After Encryption :" << TextAfterEncrypt << endl;
	cout << "Text After Decryption :" << TextAfterDecrypt << endl;
	return 0;
}