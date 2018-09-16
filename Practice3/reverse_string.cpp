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
	
	string str = reverse(word);
	
	if (str == word) 
	{
		cout << "is P" << endl;
	}
	else {
		cout << "is not P" << endl;
	}
}

string reverse(string input)
{
	string str;
	for( int i = input.length() - 1; i < input.length(); i--)
	{
		str += input[i];
		//str.append( &input[i], 0, 1);
	}
	return str;
}