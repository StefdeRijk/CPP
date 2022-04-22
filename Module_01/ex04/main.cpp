#include <iostream>
#include <fstream>
#include <string>

int	ft_error(std::string str)
{
	std::cout << str << std::endl;
	return (1);
}

std::string	ft_replace(std::string replace_str, std::string s1, std::string s2)
{
	if (s1.empty() || s2.empty())
		return ("");
	for (size_t index = 0; index < replace_str.size(); index++)
	{
		if (replace_str.compare(index, s1.size(), s1) == 0)	
		{
			replace_str.erase(index, s1.size());
			replace_str.insert(index, s2);
		}
	}
	return (replace_str);
}

int	main(int argc, char **argv)
{
	std::ifstream	in_file;
	std::ofstream	out_file;
	std::string		file_name;
	std::string		read_str;
	std::string		replace_str;

	if (argc != 4)
		return (ft_error("This program takes 3 arguments"));
	if (!argv[2][0] || !argv[3][0])
		return (ft_error("s1 and s2 can't be empty"));
	file_name = argv[1];
	in_file.open(file_name);
	if (in_file.fail())
		return (ft_error("File does not exist"));
	out_file.open(file_name.append(".replace"));
	replace_str.assign(std::istreambuf_iterator<char>(in_file), std::istreambuf_iterator<char>());
	replace_str = ft_replace(replace_str, argv[2], argv[3]);
	out_file << replace_str;
	in_file.close();
	out_file.close();
	return (0);
}
