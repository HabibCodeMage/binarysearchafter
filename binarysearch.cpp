// binarysearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int binarysearch(const int array[], int size,int x)
{
	int low = 0, high = size - 1;
	while (low<=high)
	{
		int mid = (high + low) / 2;
		if (array[mid] < x)
			low = mid + 1;
		else if (array[mid] > x)
			high = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10];
	int value;
	cout << "ENTER TEN VALUES IN ASSENDING ORDER\n";
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ENTER " << i + 1 << " VALUE:";
		cin >> arr[i];
	}
	cout << "ENTER VALUE YOU WANT TO SEARCH:";
	cin >> value;
	cin.ignore();
	value = binarysearch(arr, 10, value);
	if (value != -1)
		cout << "GIVEN VALUE FOUND AT INDEX " << value<<endl;
	else
	{
		cout << "GIVEN VALUE DO NOT FOUND\n";
	}
	system("pause");
     
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
