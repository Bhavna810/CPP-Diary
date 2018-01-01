#include <iostream>

void sel_sort(int arr[], size_t size);

int main()
{	
	int arr[ ] = {5, 9, 7, 1, 2, 4, 8, 3, 0, 6};
	
	std::cout << "Initial unsorted array is: " << std::endl;
	for(int i = 0; i < 10; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}