#include <iostream>
#include <iterator>
#include <list>

int main()
{
    std::list< int >                         lista;
    std::list< int >::const_iterator         cit;
    std::list< int >::const_reverse_iterator crit;

    lista.push_back(4);
    lista.push_front(7);
    lista.push_front(1);
    lista.push_front(12);
    lista.push_front(-3);

    std::cout << "lista od przodu:" << std::endl;
    for (cit = lista.begin(); cit != lista.end(); cit++)
        std::cout << *cit << std::endl;

    std::cout << std::endl << "lista od tylu:" << std::endl;
    for (crit = lista.rbegin(); crit != lista.rend(); crit++)
        std::cout << *crit << std::endl;
}

/* 
Nie można zmienić wartości elementu, na który wskazuje const_iterator lub const_reverse_iterator

 Po uruchomieniu otrzymano:
  lista od przodu:
  -3
  12
  1
  7
  4

  lista od tylu:
  4
  7
  1
  12
  -3
*/