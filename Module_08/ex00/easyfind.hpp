#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T> typename T::iterator easyfind(T a, int b)
{
	typename T::iterator found = std::find(a.begin(), a.end(), b);
	if (found != a.end())
		return (found);
	throw std::exception();
}

#endif