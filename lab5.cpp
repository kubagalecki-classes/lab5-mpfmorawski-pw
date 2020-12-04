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
    std::cout << "std::vector" << std::endl;
    std::vector< int > wektor(2, 1);
    std::cout << "Pierwszy:\t" << wektor[0] << std::endl;
    std::cout << "Ostatni:\t" << wektor[1] << std::endl;
    std::cout << "Adres pierwszego:\t" << &wektor[0] << std::endl;
    std::cout << "Adres ostatniego:\t" << &wektor[1] << std::endl;

    return 0;
}

/* 
Adresy pierwszego i ostatniego elementu listy są od siebie dalej niż dla analogicznie utworzonego wektora.

Po uruchomieniu otrzymano:
  std::list
  Pierwszy:   7
  Ostatni:    4
  Adres pierwszego:   0x55ec1146c2b0
  Adres ostatniego:   0x55ec1146c290

  std::vector
  Pierwszy:   1
  Ostatni:    1
  Adres pierwszego:   0x55ec1146c2c0
  Adres ostatniego:   0x55ec1146c2c4
*/