#include "Search.h"

// Runs in O(n)
// Checks every item in the array for the numToSearchFor
// (works on sorted and non-sorted)
// Returns the position of the item if it is found
// Returns -1 if it was not found
int Search::simple_search(std::vector<int> arr, int numToSearchFor) {
	//unsigned int arrSize = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == numToSearchFor) {
			return i;
		}
	}

	return -1;
}

// Runs in O(log n)
// Divides the array in half looking for the numbers to search for
// (only works on a sorted array)
// Returns the position of the item if it is found
// Returns -1 if it was not found
void Search::binary_search(int arr[], int numToSearchFor) {
	
}