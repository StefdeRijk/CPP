#ifndef ITER_HPP
# define ITER_HPP

#include "cstddef"

template <typename T> void iter(T array[], std::size_t len, void (*function)(T const &))
{
	for (std::size_t i = 0; i < len; i++)
	{
		function(array[i]);
	}
}

#endif