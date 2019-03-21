/*
Created by Jason Beals
Palindrome program
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <cstring>
using namespace std;

void rev(char* s); //prototype

int main(int argc, char* argv[])
{
	char input[1000] = "";
	for (int i = 1; i < argc; i++)
		strcat_s(input, 1000, argv[i]);

	char palindrome[1000] = ""; //empty string
	for (int i = 1; i < argc; i++)
		strcat_s(palindrome, 1000, argv[i]);

	rev(palindrome);

	if (strcmp(palindrome, input) == 0)
		cout << "This is a palindrome!" << endl;
	else
		cout << "Sorry, not a palindrome" << endl;

	return 0;
}

void rev(char* s)
{
	for (size_t i = 0; i < strlen(s) / 2; i++)
	{
		char x = s[i];
		s[i] = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = x;
	}
}