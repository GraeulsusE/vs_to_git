#pragma once

#include <vector>
#include <iostream>


template<typename T>
void printVectorElems(const std::vector<T>& vec) {
	std::cout << "Vector's elements:\n";
	for (auto elem : vec)
		std::cout << elem << std::endl;
}