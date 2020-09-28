// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <vector>

int main() {

	std::vector<int> v1 = { 1,2,3,4,5 };
	std::vector<int>::iterator it1;

	for (it1 = v1.begin(); it1 != v1.end(); ++it1)
		std::cout << *it1 << " ";


	return 0;
}