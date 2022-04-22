#ifndef SPAN_HPP
# define SPAN_HPP

#include <algorithm>
#include <vector>
#include <numeric>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &object);
		~Span();

		Span&	operator=(const Span &object);

		void	addNumber(int num);
		void	addSequence(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int		shortestSpan(void);
		int		longestSpan(void);
		
	private:
		unsigned int		_size;
		std::vector<int>	_data;
};

#endif