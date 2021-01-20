#include "vector.hpp"
#include <vector>

#ifndef TESTED_NAMESPACE
# define TESTED_NAMESPACE ft
#endif

#define TESTED_TYPE int

template <typename T>
void	printSize(TESTED_NAMESPACE::vector<T> const &vct, bool print_content = 0)
{
	std::cout << "size: " << vct.size() << std::endl;
	std::cout << "capacity: " << vct.capacity() << std::endl;
	std::cout << "max_size: " << vct.max_size() << std::endl;
	if (print_content)
	{
		typename TESTED_NAMESPACE::vector<T>::const_iterator it = vct.begin();
		typename TESTED_NAMESPACE::vector<T>::const_iterator ite = vct.end();
		std::cout << std::endl << "Content is:" << std::endl;
		for (; it != ite; ++it)
			std::cout << "- " << *it << std::endl;
	}
	std::cout << "###############################################" << std::endl;
}

int		main(void)
{
	const int size = 20;
	//TESTED_NAMESPACE::vector<TESTED_TYPE>::const_iterator ite = vct.begin();
	TESTED_NAMESPACE::vector<TESTED_TYPE> vct(size, 20);
	TESTED_NAMESPACE::vector<TESTED_TYPE>::iterator it = vct.begin();

	for (int i = 5; i < size; ++i)
		it[i] = i;

	printSize(vct, true);
	return (0);
}
