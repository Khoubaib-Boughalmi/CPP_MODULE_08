#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <vector>

template<typename T>
bool easyfind(T &conatiner, int val) {
    for (typename T::iterator it = conatiner.begin(); it != conatiner.end(); it++)
    {
        if(*it == val)
            return (1);
    }
    return (0);
}

#endif