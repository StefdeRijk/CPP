#include <iostream>

struct Data{
	int			size;
	const char	*data;
};

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		*data = new Data;
	Data		*copied_data;
	uintptr_t	data_ptr;

	data->size = 10;
	data->data = "HelloWorld";

	data_ptr = serialize(data);
	copied_data = deserialize(data_ptr);

	std::cout << copied_data->size << std::endl;
	std::cout << copied_data->data << std::endl;
	return (0);
}
