#include <iostream>
#include <list>

int main()
{
    std::cout << "std::list" << std::endl;
    std::list< int > lista;
    lista.push_back(4);
    lista.push_front(7);
    std::cout << std::endl;
    lista.push_front(1);
    lista.push_front(12);
    lista.push_front(-3);
    //std::cout << lista[2] << std::endl; //NIEPOPRAWNE!

    return 0;
}
