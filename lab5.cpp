#include "Human.hpp"
#include <iostream>
#include <vector>

int main()
{
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
            for (int i = 0; i < static_cast< int >(human_vector.size()); i++)
                std::cout << human_vector[i].getName() << std::endl;
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
  Michal

  Aktualna lista:
  Adam
  Michal

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y
  Podaj imie lub frazę pop
  pop

  Aktualna lista:
  Adam

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  y
  Podaj imie lub frazę pop
  Piotrek

  Aktualna lista:
  Adam
  Piotrek

  Chcesz dodac/odjac czlowieka do/z listy? [y/n]
  n

  Koniec
  human_vector size: 2
  human_vector capacity: 2
*/