﻿#include <vector>
#include <iostream>
#include <fstream>
#include "Tasks.h"
#include "Readers.h"

int main()
{
	while (true) {
		std::cout << "Please press if you want to check:" << std::endl
			<< "1 - task 1" << std::endl
			<< "2 - task 2" << std::endl
			<< "3 - task 3" << std::endl
			<< "4 - task 4" << std::endl
			<< "0 - to stop the program" << std::endl;
		int choice = ReadInt();
		switch (choice) {
		case 1:
			Task1();
			break;
		case 2:
			Task2();
			break;
		case 3:
			Task3();
			break;
		case 4:
			Task4();
			break;
		case 0:
			return 0;
		}
	}
}

