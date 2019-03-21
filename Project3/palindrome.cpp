#include <iostream>
#include <string>
using namespace std;

string rev(string s); // prototype

int main()
{
	string userInput;

	cout << "Please enter a potential palindrome" << endl;
	getline(cin, userInput); //reads input into an instance of the string class

	//removes spaces from a string
	for (int i = 0; i < userInput.length(); i++)
		while (userInput[i] == ' ')
			userInput.erase(i, 1);

	if (userInput == rev(userInput))
		cout << "Valid palindrome" << endl;

	else
		cout << "Sorry, invalid palindrome" << endl;

	return 0;

}

string rev(string s)
{
	string pal;

	for (int i = 0; i < s.length(); i++)
		pal += s[s.length() - 1 - i];

	return pal;
}