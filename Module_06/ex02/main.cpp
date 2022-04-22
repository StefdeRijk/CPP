#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	std::srand(std::time(NULL));
	int	random = std::rand() % 3;

	Base	*instance;
	if (random == 0)
		instance = new A;
	else if (random == 1)
		instance = new B;
	else
		instance = new C;
	return (instance);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown base..." << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Unknown base..." << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base	*base = generate();

	identify(base);
	identify(*base);
	return (0);
}
