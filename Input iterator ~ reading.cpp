// STL Containers developed by Linda P�rez on August 2020
// 

#include <iostream>
#include <iterator>

int main() {
	
	int x, y;

	std::cout << "Insert two numbers\t" << std::flush;
	std::cin.clear();
		
	std::istream_iterator<int> it(std::cin);
	std::istream_iterator<int> zero;

	if (it == zero)	std::cout << "no introduced numbers";
	else {
		x = *it++;
		y = *it;
	}

	std::cout << "La suma es\t" << x + y;


	return 0;
}