#include <iostream>
#include <list>
#include <vector>

int main()
{
    std::cout << "std::list" << std::endl;
    std::list< int > lista;
    lista.push_back(4);
    lista.push_front(7);
    std::cout << "Pierwszy:\t" << lista.front() << std::endl;
    std::cout << "Ostatni:\t" << lista.back() << std::endl;
    std::cout << "Adres pierwszego:\t" << &lista.front() << std::endl;
    std::cout << "Adres ostatniego:\t" << &lista.back() << std::endl;
    std::cout << std::endl;
    lista.push_front(1);
    lista.push_front(12);
    lista.push_front(-3);
    std::cout << "Do listy dodano kilka elementow na poczatku" << std::endl;
    std::cout << "Pierwszy:\t" << lista.front() << std::endl;
    std::cout << "Ostatni:\t" << lista.back() << std::endl;
    std::cout << "Adres pierwszego:\t" << &lista.front() << std::endl;
    std::cout << "Adres ostatniego:\t" << &lista.back() << std::endl;

    return 0;
}

/*
Adres ostatniego elementu nie zmienił się. Jest to związane ze strukturą listy, która składa się z węzłów. Dopisując węzły na przód, nie zmieniamy "położenia" w pamięci ostatniego elementu.

Po uruchomieniu otrzymano:
  std::list
  Pierwszy:   7
  Ostatni:    4
  Adres pierwszego:   0x5556a3a3f2b0
  Adres ostatniego:   0x5556a3a3f290

  Do listy dodano kilka elementow na poczatku
  Pierwszy:   -3
  Ostatni:    4
  Adres pierwszego:   0x5556a3a3f310
  Adres ostatniego:   0x5556a3a3f290
*/