#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iterator>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > wektor;
    std::list< int >::const_reverse_iterator crit;

    for (crit = people.rbegin(); crit != people.rend(); crit++)
    {   
      crit->birthday();
      if(crit->isMonster())
        wektor.push_back('n');
      else
        wektor.push_back('y');
    }
    return wektor;
}
