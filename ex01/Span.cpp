#include "Span.h"

Span::Span(): _MaxSize(0), _Size(0) {}

Span::Span(unsigned int n): _MaxSize(n), _Size(0) {
}

Span::Span(const Span &other) {
    this->_MaxSize = other._MaxSize;
    this->_Size = other._Size;
    for (size_t i = 0; i < other._MaxSize ; i++)
        this->arr[i] = other.arr[i];
}

const Span& Span::operator=(const Span &other) {
    if(this != &other)
    {
        this->_MaxSize = other._MaxSize;
        this->_Size = other._Size;
        for (size_t i = 0; i < other._MaxSize ; i++)
            this->arr[i] = other.arr[i];
    }
    return *this;
}

void Span::addNumber(int value) {
    if(this->_Size > this->_MaxSize - 1)
        throw std::exception();
    this->_Size++;
    this->arr.push_back(value);
}

void Span::addNumberRange(std::vector<int> &values) {
    if(values.size() + this->_Size > this->_MaxSize - 1)
        throw std::exception();
    this->_Size += values.size();
    this->arr.insert(this->arr.end(), values.begin(), values.end());
}

void Span::displayList() {
    for (std::vector<int>::iterator it = this->arr.begin(); it != this->arr.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}
int find_min(std::vector<int>::iterator start, std::vector<int>::iterator end ) {
    int tmp;
    std::vector<int>::iterator val = start;
    for (std::vector<int>::iterator it = start; it != end; it++)
    {
        if(*it < *val)
        {
            tmp = *it;
            *it = *val;
            *val = tmp;
        }
    }
    return (0);
}

int Span::longestSpan() {
    if(this->_Size < 2)
        throw std::exception();
    sort(this->arr.begin(), this->arr.end());
    std::cout << "max: " << *(this->arr.end() - 1) - *(this->arr.begin()) << std::endl;
    return (0);
}

int Span::shortestSpan() {
    if(this->_Size < 2)
        throw std::exception();
    int min = 2147483647;
    sort(this->arr.begin(), this->arr.end());
    for (std::vector<int>::iterator it = this->arr.begin(); it != this->arr.end() - 1; it++)
    {
        if(*(it + 1) - *it < min)
            min = *(it + 1) - *it;
    }
    std::cout << "min: " << min << std::endl;
    return (0);
}

Span::~Span() {
}
