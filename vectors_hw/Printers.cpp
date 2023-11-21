#include "Printers.h"
#include <vector>
#include <iostream>
#include <fstream>

void PrintVector(const std::vector<int>& vectorToPrint) {

	for (int i = 0; i < vectorToPrint.size(); i++) {
		std::cout << vectorToPrint[i] << " ";
	}

	std::cout << std::endl;
}

