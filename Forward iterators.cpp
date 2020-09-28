// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <forward_list>

int main() {

	std::forward_list<int> fL1 = { 1,3,5,7,9 };
	std::forward_list<int>::iterator it;

	for (it = fL1.begin(); it != fL1.end();it++)
		std::cout << *it << " ";

	return 0;
}

