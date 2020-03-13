#include <iostream>

using namespace std;

int main() {
	int n1 = 10;
	float f1 = 1234.0;
	int oldFlag;

	cout << ios::adjustfield << "\n"
		<< ios::internal << "\t" << ios::left << "\t" << ios::right << "\n";
	cout << ios::basefield << "\n"
		<< ios::dec << "\t" << ios::hex << "\t" << ios::oct << "\n";
	cout << ios::floatfield << "\n"
		<< ios::fixed << "\t" << ios::scientific << "\n";
	cout << ios::boolalpha << "\t" << ios::showbase << "\t" << ios::showpoint
		<< "\t" << ios::showpos << "\t" << ios::skipws << "\t" << ios::unitbuf
		<< "\t" << ios::uppercase << "\n";
	cout << ios_base::hex << "\t" << ios::hex << "\t" << cout.hex << "\n";

	cout << cout.flags() << "\t" << cin.flags() << "\n";

	/*
	char c1, c2;
	cin >> c1 >> c2;
	cout << '[' << c1 << ']' << '[' << c2 << ']' << "\n";
	cin >> noskipws >> c1 >> c2;
	cout << '[' << c1 << ']' << '[' << c2 << ']' << "\n";
	*/
	/*
	cout << boolalpha;
	cout << true << "\n";
	bool b;
	cin >> boolalpha;
	cin >> b;
	cout << b << "\n";
	*/

	cout << '[';
	cout.width(10);
	cout.fill('*');
	cout << 10;
	cout << ']' << "\n";
	cout << '[' << 10 << ']' << "\n";

	cout.width(5);
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	cout << 10.123f << "\n";

	cout << cout.flags() << "\t" << cin.flags() << "\n";

	/*
	oldFlag = cout.flags();
	cout << oldFlag << "\n";
	oldFlag = cout.setf(ios::showpos); // Show sign.
	cout << "[" << n1 << "]\n";
	cout.flags(oldFlag);
	cout << cout.flags() << "\n";
	cout << "[" << n1 << "]\n";
	*/

	cout.fill('*');
	cout.setf(ios::left);
	for (int i = 1; i <= 10; ++i) {
		cout.width(i);
		for (int j = 0; j < i; ++j) {
			cout << ' ';
		}
		cout << "\n";
	}
	return 0;
}