#include <iostream>

using namespace std;

int main()
{
	int size = 0, value = 0;
	int arr[size];
	bool val_found = false;
	
	cout << "How many values would you like to store?" << endl;
	cin >> size;
	cout << "Enter values" << endl;
	for (int i = 0; i < size; i++){
		cin >> arr[i];
	}
	
	cout << "which value would you like to search for?\n";
	cin >> value;
	
	for (int i = 0; i < size; i++){
		if( value == arr[i]){
			cout << value << " found at index " << i << endl;
			val_found = true;
		} 
	}
	
	if (val_found == false){
		cout << value << " foudn at index -1" << endl;
	}
	return 0;	
}