#include <iostream>
#include <list>

int main()
{
    std::list< int > lista;
    lista.push_back(4);
    std::cout << "Pierwszy: " << lista.front() << std::endl;
    std::cout << "Ostatni: " << lista.back() << std::endl;
    return 0;
}

/* Po uruchomieniu otrzymano:
  Pierwszy: 4
  Ostatni: 4
*/