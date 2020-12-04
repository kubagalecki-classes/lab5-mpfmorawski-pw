#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iterator>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > wektor;
    std::list< Human >::reverse_iterator rit;

    for (rit = people.rbegin(); crit != people.rend(); crit++)
    {   
      rit->birthday();
      if(rit->isMonster())
        wektor.push_back('n');
      else
        wektor.push_back('y');
    }
    return wektor;
}
