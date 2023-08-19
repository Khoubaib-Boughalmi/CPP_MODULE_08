#include "easyfind.h"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::cout << easyfind(vec, 0) << std::endl;
    return (0);
}