#include "Readers.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <array>

void ClearStream(std::istream& stream) {
	stream.clear();
	stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int ReadInt() {
	int result;
	std::cin >> result;

	while (!std::cin.good()) {
		std::cout << "Your input is of wrong type, please enter a number" << std::endl;
		ClearStream(std::cin);
		std::cin >> result;
	}

	return result;
}

std::size_t ReadSizeT() {
	int result;
	std::cin >> result;

	while (!std::cin.good() || result < 0) {
		std::cout << "Your input is of wrong type, please enter a positive number" << std::endl;
		ClearStream(std::cin);
		std::cin >> result;
	}

	return result;
}

std::vector<int> ReadVector() {
	std::vector<int> numbers;
	std::cout << "Enter how many elements you want to be in the vector, please" << std::endl;
	std::size_t numberOfElements = ReadSizeT();
	numbers.reserve(numberOfElements);
	std::cout << "Enter " << numberOfElements << " numbers, please" << std::endl;

	for (int i = 0; i < numberOfElements; i++) {
		numbers.push_back(ReadInt());
	}

	return numbers;
}

std::array<int, 10> ReadArray() {
	std::array<int, 10> myArray {};
	std::cout << "Enter 10 numbers plese!" << std::endl;
	for (int i = 0; i < 10; i++) {
		myArray[i] = ReadInt();
	}
	return myArray;
}

