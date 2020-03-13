#include <iostream>
#include <fstream>
#include <string.h>

int WriteCharFile() {
	std::ofstream fout("b.txt");
	if (!fout) {
		std::cout << "Failed to create file\n";
		return -1;
	}

	char line[1024];
	std::cout << "Enter data to write to file (stop to end): ";
	std::cin.getline(line, 1024);
	while (strcmp(line, "stop") != 0) {
		fout << line << "\n";
		std::cin.getline(line, 1024);
	}

	return 0;
}

int ReadCharFile() {
	std::ifstream fin("b.txt");
	if (!fin) {
		std::cout << "Failed to open file\n";
		return -1;
	}

	char line[1024];
	fin.getline(line, 1024);
	while (!fin.eof()) {
		std::cout << line << "\n";
		fin.getline(line, 1024);
	}

	return 0;
}

int WriteIntFile() {
	std::ofstream fout("int1.txt");
	if (!fout) {
		std::cout << "Failed to create file\n";
		return -1;
	}

	int i;
	std::cout << "Enter data to write to file (-1 to end): ";
	std::cin >> i;
	while (i != -1) {
		fout << i << "\n";
		std::cin >> i;
	}
	return 0;
}

int ReadIntFile() {
	std::ifstream fin("int1.txt");
	if (!fin) {
		std::cerr << "Failed to open file\n";
		return -1;
	}
	int i;
	fin >> i;
	while (!fin.eof()) {
		std::cout << i << "\n";
		fin >> i;
	}
	return 0;
}

int main() {
	WriteIntFile();
	ReadIntFile();
	return 0;
}
