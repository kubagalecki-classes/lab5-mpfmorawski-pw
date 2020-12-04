#include <iostream>
#include <vector>

int main()
{
    std::vector< int > vec1(100, 42);
    std::vector< int > vec2{100, 42};
    std::cout << "vec1: "
              << "\tsize: " << vec1.size() << " \tcapacity: " << vec1.capacity() << std::endl;
    std::cout << "vec2: "
              << "\tsize: " << vec2.size() << " \tcapacity: " << vec2.capacity() << std::endl;

    std::cout << "Zawartosc vec2: " << vec2[0] << " " << vec2[1] << std::endl;
}

/* Po uruchomieniu otrzymano:
  vec1:   size: 100   capacity: 100
  vec2:   size: 2     capacity: 2
  Zawartosc vec2: 100 42
*/