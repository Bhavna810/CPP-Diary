#include <iostream>

int recursive_func (int num)
{
	 // If the value is equal to 1, go back to the main()
    if (num == 1)
	{
		std::cout << num;
        return num;
    } else {
		std::cout << num << " * ";
		return num * recursive_func(num - 1);
	}
}

int main()
{
    int n = 5;
    int fac = recursive_func(n);
	
	std::cout << " = " << fac << std::endl;
	
    return 0;
}
