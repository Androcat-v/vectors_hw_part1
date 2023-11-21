#include "Tasks.h"
#include "Readers.h"
#include "Algorithms.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <array>

void Task1() {
	std::vector<int> testVecor = ReadVector();
	if (!testVecor.empty()) {
		std::cout << FindMinElement(GetEvenOddNums(testVecor));
	}
	else {
		std::cout << "Your vector is empty!" << std::endl;
	}
}

void Task2() {
	int cStyleArr[10]{};
	std::cout << "Enter 10 numbers plese!" << std::endl;
	for (int i = 0; i < 10; i++) {
		cStyleArr[i] = ReadInt();
	}
	// добавл€ем 2, чтобы было сумма номеров, а не индексов
	int result = FindMaxElementIndex(cStyleArr) + FindMinElementIndex(cStyleArr) + 2; 
	std::cout << result << std::endl;
}

void Task3() {
	NumsMultiplication(ReadArray());
}

void Task4() {
	std::cout << "Enter how many elements you want to be in the array, please" << std::endl;
	std::size_t arraySize = ReadSizeT();
	int* dynamicCStyleArr = new int[arraySize] {};
	std::cout << "Please enter " << arraySize << " numbers!" << std::endl;
	
	for (int i = 0; i < arraySize; i++) {
		dynamicCStyleArr[i] = ReadInt();
	}
	
	for (int i = 0; i < arraySize; i++) {
		std::cout << dynamicCStyleArr[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Plese enter 2 indexes you want to swap!" << std::endl;
	std::swap(dynamicCStyleArr[ReadInt()], dynamicCStyleArr[ReadInt()]);

	for (int i = 0; i < arraySize; i++) {
		std::cout << dynamicCStyleArr[i] << " ";
	}
	std::cout << std::endl;
	delete[] dynamicCStyleArr;
}