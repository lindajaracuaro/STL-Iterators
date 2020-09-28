// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <iterator>

int main() {

	// OBJECT CREATION
	std::ostream_iterator<int> output(std::cout, " ");

	// INSTANCING 
	for (auto i : { 1,3,5,7,9 })
		 *output++ = i;

	return 0;
}