#include "Search.h"

// Runs in O(n)
// Checks every item in the array for the numToSearchFor
// (works on sorted and non-sorted)
// Returns the position of the item if it is found
// Returns -1 if it was not found
int Search::simple_search(std::vector<int> arr, int numToSearchFor) {
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
int Search::binary_search(std::vector<int> arr, int numToSearchFor) {
	unsigned low = 0;
	unsigned high = arr.size() - 1;
	unsigned mid;

	while (low < high) {
		mid = (high + low) / 2;
		if (arr[mid] == numToSearchFor) {
			return mid;
		}
		else if (numToSearchFor > arr[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return -1;
}

int Search::binary_search_recursive(std::vector<int> arr, int numToSearchFor, unsigned low, unsigned high) {
	if (low > high) {
		return -1;
	}

	unsigned mid = (high + low) / 2;
	if (arr[mid] == numToSearchFor) {
		return mid;
	}
	else if (numToSearchFor > arr[mid]) {
		return Search::binary_search_recursive(arr, numToSearchFor, mid + 1, high);
	}
	else {
		return Search::binary_search_recursive(arr, numToSearchFor, low, mid - 1);
	}
}