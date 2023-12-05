#ifndef SEARCH_H
#define SEARCH_H

#include <vector>

class Search {
public:
	static int simple_search(std::vector<int> arr, int numToSearchFor);
	static int binary_search(std::vector<int> arr, int numToSearchFor);
	static int binary_search_recursive(std::vector<int> arr, int numToSearchFor, unsigned low, unsigned high);
};

#endif // !SEARCH_H
