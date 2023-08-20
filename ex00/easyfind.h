#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
bool easyfind(T &conatiner, int val) {
    typename T::iterator it;
    it = std::find(conatiner.begin(), conatiner.end(), val);
    if(it == conatiner.end())
        return (0);
    return (1);
}

#endif