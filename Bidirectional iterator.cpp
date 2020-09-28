// STL Containers developed by Linda Pérez on August 2020
// 

#include <iostream>
#include <set>

int main() {

	// DECLARING CONTAINER
	std::set<int> s1 = { 3,6,9,12 };
	// DECLARING BI-ITERATOR JUST FOR	LIST, MAP, SET
	std::set<int>::iterator it;

	// ASSIGNS VALUE TO ITERATOR AND PRINTS
	// A -> Z
	for (it = s1.begin(); it != s1.end(); ++it)
		std::cout << *it << " ";

	std::cout << "\n";
	// Z -> A
	for (it = s1.end(); it != s1.begin();)
		std::cout << *--it << " ";

	std::cout << "\n";

	// RANGE-BASED LOOP
	// ASSIGNS EVERY ELEMENT OF S1 TO i AND PRINTS
	for (auto i : s1)
		std::cout << i << " ";

	return 0;
}