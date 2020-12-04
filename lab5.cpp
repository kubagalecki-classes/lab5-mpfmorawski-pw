#include "Human.hpp"
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

int main()
{
    /* ZADANIE 13 */

    std::cout << "Lista:" << std::endl;
    std::list< int > lista;
    lista.push_back(4);
    lista.push_front(7);
    lista.push_front(1);
    lista.push_front(12);
    lista.push_front(-3);

    for (const int& elem : lista)
        std::cout << elem << std::endl;

    /* ZADANIE 12 */
    
    std::cout << std::endl << "Wektor osob:" << std::endl;
    std::vector< Human > human_vector;
    bool                 end = false;
    char                 letter;
    std::string          imie;

    while (!end) {
        std::cout << "Chcesz dodac/odjac czlowieka do/z listy? [y/n]" << std::endl;
        std::cin >> letter;
        if (letter == 'y') {
            std::cout << "Podaj imie lub frazę pop" << std::endl;
            std::cin >> imie;
            if (imie != "pop") {
                Human dH{std::move(imie), 18, true, true};
                human_vector.push_back(dH);
                // human_vector_.emplace_back(dH);
            }
            else {
                human_vector.pop_back();
            }
            std::cout << std::endl << "Aktualna lista:" << std::endl;

            for (const Human& human : human_vector)
                std::cout << human.getName() << std::endl;

            std::cout << std::endl;
        }
        if (letter == 'n') {
            std::cout << std::endl << "Koniec" << std::endl;
            std::cout << "human_vector size: " << human_vector.size() << std::endl;
            std::cout << "human_vector capacity: " << human_vector.capacity() << std::endl;
            return 0;
        }
    }
}

/* Po uruchomieniu otrzymano:
  Lista:
  -3
  12
  1
  7
  4

  Wektor osob:
  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y
  Podaj imie lub frazę pop
  A

  Aktualna lista:
  A

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y
  Podaj imie lub frazę pop
  B

  Aktualna lista:
  A
  B

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y
  Podaj imie lub frazę pop
  C

  Aktualna lista:
  A
  B
  C

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  n

  Koniec
  human_vector size: 3
  human_vector capacity: 4
*/