#include "Human.hpp"
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector< Human >           human_vector;
    bool                           end = false;
    char                           letter;
    std::string                    imie;
    std::vector< Human >::iterator it;
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


            for (it = human_vector.begin(); it != human_vector.end(); it++)
                std::cout << it->getName() << std::endl;


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
  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y   
  Podaj imie lub frazę pop
  Adam

  Aktualna lista:
  Adam

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y
  Podaj imie lub frazę pop
  Kondzio

  Aktualna lista:
  Adam
  Kondzio

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y
  Podaj imie lub frazę pop
  Piotrek

  Aktualna lista:
  Adam
  Kondzio
  Piotrek

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  n

  Koniec
  human_vector size: 3
  human_vector capacity: 4
*/