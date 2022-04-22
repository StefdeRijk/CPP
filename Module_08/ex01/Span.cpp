#include "Span.hpp"

Span::Span(): _size(0), _data(0) {
}

Span::Span(unsigned int N): _size(N), _data(std::vector<int>(N)) {
}

Span::Span(const Span &object): _size(object._size), _data(object._data) {
}

Span::~Span() {
}

Span&	Span::operator=(const Span &object) {
	this->_size = object._size;
	this->_data = object._data;
	return (*this);
}

void	Span::addNumber(int num){
	unsigned int i;

	for (i = 0; this->_data[i]; i++) {
	}
	if (i > this->_size)
		throw std::length_error("Vector is full");
	this->_data[i] = num;
}

void	Span::addSequence(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	std::vector<int>	temp(begin, end);

	if (temp.size() > this->_size)
		throw std::range_error("Cannot add that many numbers");
	std::copy(temp.begin(), temp.end(), std::back_inserter(this->_data));
}

int		Span::shortestSpan(void) {
	if (this->_size < 2)
		throw std::length_error("Vector needs at least 2 elements to calculate shortest span");

	std::vector<int>	sorted = this->_data;
	std::sort(sorted.begin(), sorted.end());
	std::adjacent_difference(sorted.begin(), sorted.end(), sorted.begin());
	return (*std::min_element(sorted.begin(), sorted.end()));
}

int		Span::longestSpan(void) {
	if (this->_size < 2)
		throw std::length_error("Vector needs at least 2 elements to calculate longest span");
	return (*std::max_element(this->_data.begin(), this->_data.end()) - *std::min_element(this->_data.begin(), this->_data.end()));
}
