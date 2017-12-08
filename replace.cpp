#include <iostream>
#include <string>

int main()
{
	std::string str = "Hello how are you";
	str.replace(2,3,"P");
	std::cout << str << std::endl;
	
	return 0;
}