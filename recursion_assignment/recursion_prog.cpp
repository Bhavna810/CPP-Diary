#include <iostream>

int recursive_func (int num)
{
	int val = 0;
	 // If the value is less than or equal to 0, go back to the main()
    if (num < 1)
        return val;
    else
		std::cout << "Value is " << num << std::endl;
		int a = --num;
		int fac = num*a;
		val = recursive_func(a);
		std::cout << val << std::endl;
		return fac;
	//int val = num;
	//if (val > 1){
	//	int fac = num*--val;
	//	std::cout << fac << std::endl;
	//}    
    // Keep recursing but decrease the value
    //recursive_func(--num);
}

int main ()
{
    int n = 5;
	int fac = 0;
    fac = recursive_func(n);
	
	std::cout << "Factorial is " << fac << std::endl;
	
    return 0;
}
