#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

using std::vector;
using std::list;
using std::for_each;
using std::transform;

void f1(Human& a)
{
	a.birthday();
}

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
	transform(people.begin(), people.end(), ret_v.rbegin(), [&](Human& a){if (a.isMonster() == true){return 'n';}else{return 'y';}});
	for_each(people.begin(), people.end(), f1);
    return ret_v;
}









