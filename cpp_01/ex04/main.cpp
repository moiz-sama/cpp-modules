#include "include.hpp"

int replacer(std::string &line, size_t len, char *old_str, char *new_str)
{
	static int occur_idx;

	occur_idx = line.find(old_str, occur_idx);
	if (occur_idx == -1)
		return (occur_idx = 0, 0);
	line.erase(occur_idx, len);
	line.insert(occur_idx, new_str);
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 4 || !av[2][0]){
		std::cerr << "usage: <file_name> <str1> <str2>\n";
		return 1;
	}
	size_t len = std::strlen(av[2]);
	std::string out_file = std::string(av[1]) + ".replace";
	std::string line;
	std::ifstream in_stream(av[1]);
	if (!in_stream.is_open())
	{
		std::cerr << "can't open " << av[1] << '\n';
		return 1;
	}
	std::ofstream out_stream(out_file.c_str());
	if (!out_stream.is_open())
	{
		std::cerr << "can't open the output file \n";
		return 1;
	}
	while (std::getline(in_stream, line))
	{
		while (replacer(line, len, av[2], av[3])){}
		out_stream << line; 
		if (!in_stream.eof())
			out_stream << '\n';
	}
}
