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
	int min_loc = 0, temp = 0;
	
	for (int i = 0; i < size; i++)
	{	
		for (int j = i; j < size; j++) 
		{
			if ( arr[j] < arr[min_loc] )
			{
				min_loc = j;
			}
		}
		std::cout << arr[min_loc] << std::endl;
		temp = arr[i];
		arr[i] = arr[min_loc];
		arr[min_loc] = temp;
	}
}	