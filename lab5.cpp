#include <iostream>
#include <iterator>
#include <list>

int main()
{
    std::list< int >           lista;
    std::list< int >::iterator it;

    lista.push_back(4);
    lista.push_front(7);
    lista.push_front(1);
    lista.push_front(12);
    lista.push_front(-3);

    std::cout << "lista od przodu:" << std::endl;
    for (it = lista.begin(); it != lista.end(); it++)
        std::cout << *it << std::endl;

    std::cout << std::endl << "lista od tylu:" << std::endl;
    for (it = (--lista.end()); it != (--lista.begin()); it--)
        std::cout << *it << std::endl;
}

/* Po uruchomieniu otrzymano:
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