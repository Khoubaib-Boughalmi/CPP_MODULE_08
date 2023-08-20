#include "Span.h"

int main()
{
    Span spn(10000);
    try
    {
        for (size_t i = 0; i < 5000; i++)
            spn.addNumber(i);
        spn.shortestSpan();
        spn.longestSpan();
    }
    catch(const std::exception& e)
    {    
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "--------------------------\n";
    std::vector<int> rangeVec;
    int list[5000];
    size_t j = 0;
    for (size_t i = 5000; i < 10000; i++)
        list[j++] = i;
    for (size_t i = 0; i < 5000; i++)
        rangeVec.push_back(list[i]);    
    try
    {
        spn.addNumberRange(rangeVec);
        spn.shortestSpan();
        spn.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}