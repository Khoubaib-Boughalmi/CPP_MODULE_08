#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>

// template <unsigned int _N>
class Span
{
    private:
        unsigned int _MaxSize;
        unsigned int _Size;
        std::vector<int> arr;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        const Span& operator=(const Span &other);
        void addNumber(int value);
        void displayList(void);
        int shortestSpan();
        ~Span();
};

#endif