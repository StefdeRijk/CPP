#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template <typename T> class Array
{
	public:
		Array(): _size(0), _data(0){};
		Array(unsigned int n): _size(n), _data(new T[n]()) {}
		Array(const Array &object): _size(object._size), _data(new T[object._size]()){
			for (unsigned int i = 0; i < this->_size; i++){
				this->_data[i] = object._data[i];
			}
		}
		~Array(){
			delete[] _data;
		}

		Array&	operator=(const Array &object){
			this->_size = object._size;
			delete this->_data;
			this->_data = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++){
				this->_data[i] = object._data[i];
			}
			return (*this);
		}

		unsigned int size(){
			return (this->_size);
		}

		T &operator[](unsigned int index){
			if (index < 0 || index > this->_size - 1)
				throw std::exception();
			return (this->_data[index]);
		}
	
	private:
		unsigned int	_size;
		T				*_data;
};

#endif