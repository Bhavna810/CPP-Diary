#include <iostream>

void sel_sort(int arr[], int size);

int main()
{	
	int size = 10;
	int arr[] = {5, 9, 7, 1, 2, 4, 8, 3, 0, 6};
	
	std::cout << "Initial unsorted array is: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	sel_sort(arr, size);
	
	std::cout << "Sorted array is: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}

void sel_sort(int arr[], int size)
{	
	int min_num = arr[0], temp = 0;
	
	for (int i = 0; i < size; i++)
	{	
		for (int j = 0; j < size; j++) 
		{
			if ( arr[j] < min_num )
			{
				min_num = arr[j];
			}
			std::cout << min_num << std::endl;
			arr[i] = temp;
			arr[i] = min_num;
			min_num = temp;
		}
	}	
}