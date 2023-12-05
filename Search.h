#ifndef SEARCH_H
#define SEARCH_H

#include <vector>

class Search {
public:
	static int simple_search(std::vector<int> arr, int numToSearchFor);
	static void binary_search(int arr[], int numToSearchFor);
};

#endif // !SEARCH_H
