#include <iostream>

void recursive_func (int num)
{
	 // If the value is less than or equal to 0, go back to the main()
    if (num < 1)
        return;
    else
        std::cout << "Value is " << num << std::endl;
		
		int val = num;
		
		if (val > 1) {
			int fac = num*--val;
			std::cout << fac << std::endl;
		}    
    // Keep recursing but decrease the value
    recursive_func(--num);
}

int main ()
{
    int n = 5;
    recursive_func(n);

    return 0;
}
