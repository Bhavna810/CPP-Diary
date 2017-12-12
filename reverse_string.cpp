#include <iostream>
#include <string>

using namespace std;

string reverse(string input);

int main()
{
	string word = " ";
	cout << "Give a word that you would to reverse: " << endl;
	cin >> word;
	string resultant_string = reverse(word);
}

string reverse(string input)
{
	string str;
	for( int i = input.length() - 1; i < input.length(); i--)
	{
		str[(input.length() - 1) - i] = input[i]; 
	}
	
	return str;
	
}