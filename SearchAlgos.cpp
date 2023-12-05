#include <iostream>
#include "Search.h"
#include <vector>

int main()
{
    //int arr[10] { 0, 4, 15, 31, 36, 50, 63, 77, 85, 99 };
    std::vector<int> arr { 0, 4, 15, 31, 36, 50, 63, 77, 85, 99 };

    auto simpResultFound = Search::simple_search(arr, 15);
    auto simpResultNotFound = Search::simple_search(arr, 100);
    std::cout << "Simple - 15 was found at position: " << simpResultFound << std::endl;
    std::cout << "Simple - 100 was not found: " << simpResultNotFound << std::endl;

    auto binResultFound = Search::binary_search(arr, 15);
    auto binResultNotFound = Search::binary_search(arr, 100);
    std::cout << "Binary - 15 was found at position: " << binResultFound << std::endl;
    std::cout << "Binary - 100 was not found: " << binResultNotFound << std::endl;

    auto binRecResultFound = Search::binary_search_recursive(arr, 15, 0, arr.size() - 1);
    auto binRecResultNotFound = Search::binary_search_recursive(arr, 100, 0, arr.size() - 1);
    std::cout << "Binary Recursive - 15 was found at position: " << binRecResultFound << std::endl;
    std::cout << "Binary Recursive - 100 was not found: " << binRecResultNotFound << std::endl;
}
