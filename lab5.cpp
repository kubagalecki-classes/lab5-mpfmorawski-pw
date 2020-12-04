#include <iostream>
#include <list>

int main()
{
    std::list< int > lista;
    lista.push_back(4);
    lista.push_front(7);
    std::cout << "Pierwszy:\t" << lista.front() << std::endl;
    std::cout << "Ostatni:\t" << lista.back() << std::endl;
    return 0;
}

/* Po uruchomieniu otrzymano:
Pierwszy:   7
Ostatni:    4
*/