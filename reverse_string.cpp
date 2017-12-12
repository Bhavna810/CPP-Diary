#include <iostream>
#include <string>

using namespace std;

string reverse(string input);

int main()
{
	string word = " ";
	cout << "Give a word that you want to reverse: " << endl;
	cin >> word;
	cout << reverse(word) << endl;
}

string reverse(string input)
{
	string str;
	for( int i = input.length() - 1; i < input.length(); i--)
	{
		str += input[i];
	}
	
	cout << str << endl;
	
	return str;
}