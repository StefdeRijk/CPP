#include "Span.hpp"
#include <iostream>
#include <array>

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span	sp2(sp);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	Span	sp3 = sp2;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	std::srand(unsigned(std::time(NULL)));
	std::vector<int>	random(10000);
	std::generate(random.begin(), random.end(), std::rand);
	Span	sp4(10000);

	sp4.addSequence(random.begin(), random.end());
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;

	try
	{
		std::srand(unsigned(std::time(NULL)));
		std::vector<int>	random(10000);
		std::generate(random.begin(), random.end(), std::rand);
		Span	sp4(1000);

		sp4.addSequence(random.begin(), random.end());
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
