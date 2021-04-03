/* 
Given an array and a number k where k is smaller than size of array, 
we need to find the k’th smallest element in the given array. It is given that all array elements are distinct
*/

#include <algorithm>
#include <iostream>
using namespace std;

// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
	// Sort the given array
	sort(arr, arr + n);

	// Return k'th element in the sorted array
	return arr[k - 1];
}

// Driver program to test above methods
int main()
{
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 2;
	cout << "K'th smallest element is " << kthSmallest(arr, n, k);
	return 0;
}
