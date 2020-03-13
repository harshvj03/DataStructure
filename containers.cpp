#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <set>
#include <map>

int UsingMap() {
	std::map<char, int> m;
	std::string str;
	std::map<char, int>::iterator it;
	std::cout << "Enter a string: ";
	std::cin >> str;

	for (int i = 0; i < str.length(); ++i) {
		it = m.find(str[i]);
		if (it == m.end()) {
			m.insert(std::pair<char, int>(str[i], 1));
		}
		else {
			(*it).second++;
		}
	}
	for (it = m.begin(); it != m.end(); ++it) {
		std::cout << (*it).first << " = " << (*it).second << "\n";
	}
	return 0;
}

int UsingSet() {
	std::set<int> elems;
	int no;
	std::cout << "Enter a no and -1 to stop: ";
	std::cin >> no;
	while (no != -1) {
		elems.insert(no);
		std::cin >> no;
	}

	std::set<int>::iterator it = elems.begin();
	while (it != elems.end()) {
		std::cout << *it << "\n";
		++it;
	}

	return 0;
}

int SortUsingPriorityQueue() {
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
	int no;
	std::cout << "Enter a no and -1 to stop: ";
	std::cin >> no;
	while (no != -1) {
		pq.push(no);
		std::cin >> no;
	}

	while (!pq.empty()) {
		std::cout << pq.top() << "\n";
		pq.pop();
	}

	return 0;
}

int MatchParenthesis() {
	std::stack<char> s;
	std::string str;

	std::cout << "Enter paranthesis string: ";
	std::cin >> str;

	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == '(')
			s.push(str[i]);
		else {
			if (s.empty()) {
				std::cout << "Mismatch\n";
				return 1;
			}
			else {
				s.pop();
			}
		}
	}
	if (!s.empty()) {
		std::cout << "Mismatch\n";
		return 1;
	}
	std::cout << "Match\n";

	return 0;
}

int Sequences() {
	std::vector<int> vInt;
	int no;
	std::cout << "Enter a no and -1 to stop: ";
	std::cin >> no;
	while (no != -1) {
		vInt.push_back(no);
		std::cin >> no;
	}
	std::cout << "Capacity of vector: " << vInt.capacity() << "\n";
	std::cout << "Enter element to insert and before what: ";
	int pos;
	std::cin >> no >> pos;
	std::vector<int>::iterator it = std::find(vInt.begin(), vInt.end(), pos);
	if (it == vInt.end()) {
		std::cout << "Element not found\n";
	}
	else {
		vInt.insert(it, no);
	}

	/*
	for (int i = 0; i < vInt.size(); ++i) {
		std::cout << vInt[i] << "\n";
	}*/
	
	//std::sort(vInt.begin(), vInt.begin() + 4, std::greater<int>());

	it = vInt.begin();
	while (it != vInt.end()) {
		std::cout << *it << "\n";
		++it;
	}
	return 0;
}

int main() {
	//Sequences();
	//MatchParenthesis();
	//SortUsingPriorityQueue();
	//UsingSet();
	UsingMap();
	return 0;
}
