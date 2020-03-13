#include <iostream>
#include <fstream>

int WriteIntFile(const char* fName) {
	std::ofstream fout(fName, std::ios::binary);
	if (!fout) {
		std::cerr << "Failed to create file.\n";
	}
	int i;
	std::cout << "Enter data to write to file (-1 to end): ";
	std::cin >> i;
	while (i != -1) {
		fout.write((const char*)&i, sizeof(int));
		std::cin >> i;
	}
	return 0;
}

int ReadIntFile(const char* fName) {
	std::fstream fio(fName, std::ios::binary | std::ios::in);
	if (!fio) {
		std::cerr << "Failed to open file\n";
		return -1;
	}

	int i;
	fio.read((char*)&i, sizeof(int));
	while (!fio.eof()) {
		std::cout << i << "\n";
		fio.read((char*)&i, sizeof(int));
	}

	return 0;
}

int ReadIntFileRev(const char* fName) {
	std::fstream fio(fName, std::ios::binary | std::ios::in);
	if (!fio) {
		std::cerr << "Failed to open file\n";
		return -1;
	}

	fio.seekg(0, std::ios::end);
	int n = fio.tellg() / sizeof(int);
	std::cout << "There are " << n << " integers in file.\n";
	int no = 100;
	for (int i = n - 1; i >= 0; --i) {
		fio.seekg(sizeof(int) * i, std::ios::beg);

		fio.read((char*)&no, sizeof(int));
		std::cout << no << "\n";
	}

	return 0;
}

int main() {
	WriteIntFile("a");
	ReadIntFile("a");
	ReadIntFileRev("a");

	return 0;
}
