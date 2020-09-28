// STL Containers developed by Linda Pérez on August 2020
// 

//	An iterator is an object that points to an element of a container 
#include <iostream>
#include <vector>

int main() {

	// VECTOR DECLARATION
	std::vector<int> v1 = { 5,10,15,20,25,30 };
	// ITERATOR DECLARATION
	std::vector<int>::iterator it1;
	std::vector<int>::iterator it2;

	// ASSIGNATION
	// it1 will point to the first item to the last of our vector.
	// at the end, the it'll stay at the end where NULL resides
	for (it1 = v1.begin(); it1 != v1.end()-1; *it1)
		std::cout << *++it1 << " ";
	std::cout << "\n";

	for (it2 = v1.end(); it2 != v1.begin()+2;*it2--)
		std::cout << *it2 << " ";
	std::cout << "\n";

	for (auto i : v1)
		std::cout << i << " ";
	std::cout << "\n";

	// OPERATIONS
	std::advance(it1, -2);
	std::cout << *it1 << " ";			// Iterator, what're you pointing right now?

	// INDEX ACCESS
	// iterator, from you are move [qty spaces]
	std::cout << it2[4] << " ";			// it2 it's in the begin
	std::cout << it1[-2];				// it1 it's in the end, so it can't move forward


	return 0;
}