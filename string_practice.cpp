#include <iostream>
#include <string>

int main()
{
	std::string str = "Hello how are you";
	str.replace(2,3,"P");
	std::cout << str << std::endl;
	
	std::string str1 = "Hello how are you";
	int ret = str1.find("o",1);
	std::cout << ret << std::endl;
	
	ret = str1.find("q",1);
	std::cout << ret << std::endl;
	
	return 0;
}