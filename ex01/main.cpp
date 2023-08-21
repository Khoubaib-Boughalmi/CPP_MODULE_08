#include "Span.h"

int main()
{
    // Span sp = Span(5);
    // try
    // {
    //     sp.addNumber(6);
    //     sp.addNumber(3);
    //     sp.addNumber(17);
    //     sp.addNumber(9);
    //     sp.addNumber(11);
    //     sp.displayList();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    //     return 0;
    // }
    
    // try
    // {
    //     std::cout << sp.shortestSpan() << std::endl;
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     std::cout << sp.longestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    Span spn(10000);
    try
    {
        for (size_t i = 0; i < 5000; i++)
            spn.addNumber(i);
        std::cout << spn.shortestSpan() << std::endl;
        std::cout << spn.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {    
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "--------------------------\n";
    std::vector<int> rangeVec;
    int list[5001];
    size_t j = 0;
    for (size_t i = 5000; i < 10001; i++)
        list[j++] = i;
    for (size_t i = 0; i < 5000; i++)
        rangeVec.push_back(list[i]);    
    try
    {
        spn.addNumberRange(rangeVec);
        std::cout << spn.shortestSpan() << std::endl;
        std::cout << spn.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}