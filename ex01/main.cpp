#include "Span.h"

int main()
{
    Span spn(7);
    try
    {
        spn.addNumber(6);
        spn.addNumber(3);
        spn.addNumber(17);
        spn.addNumber(9);
        spn.addNumber(11);
    }
    catch(const std::exception& e)
    {    
        std::cerr << e.what() << '\n';
    }
    
    spn.displayList();
    std::cout << "--------------------------\n";
    spn.shortestSpan();
    spn.displayList();
    // spn.addNumber(1);
    return (0);
}