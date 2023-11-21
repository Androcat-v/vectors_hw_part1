#include "Algorithms.h"
#include "Tasks.h"
#include "Readers.h"
#include <vector>
#include <array>
#include <iostream>
#include <fstream>

int FindMinElementIndex(int numbers[10]) {
	int minIndex{0};
	for (int i = 0; i < 10; i++) {
		if (numbers[minIndex] >= numbers[i]) {
			minIndex = i;
		}
	}
	return minIndex;
}

int FindMaxElementIndex(int numbers[10]) {
	int maxIndex{ 0 };
	for (int i = 0; i < 10; i++) {
		if (numbers[maxIndex] <= numbers[i]) {
			maxIndex = i;
		}
	}
	return maxIndex;
}

int FindMinElement(const std::vector<int>& vectorToMin) {
	int intToCheck = vectorToMin[0];
	for (int i = 0; i < vectorToMin.size(); i++) {
		if (intToCheck >= vectorToMin[i]) {
			intToCheck = vectorToMin[i];
		}
	}

	return intToCheck;
}

std::vector<int> GetEvenOddNums(std::vector<int> testVector) {
	std::vector<int> evenNums;
	std::vector<int> oddNums;

	for (int i = 0; i < testVector.size(); i++) {
		int n = 0;
		if (testVector[i] % 2 == 0) {
			evenNums.push_back(testVector[i]);
		}
		else {
			oddNums.push_back(testVector[i]);
		}
		n++;
	}

	if (evenNums.size() != 0) {
		return evenNums;
	}
	else if (oddNums.size() != 0) {
		return oddNums;
	}
	else {
		return {};
	}
}

void NumsMultiplication(std::array<int, 10> testArray) {
	int multiplicationResult{1};

	for (int i = 0; i < 10; i += 2) {
		multiplicationResult *= testArray[i];
	}

	std::cout << multiplicationResult << std::endl;
}

