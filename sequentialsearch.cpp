#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>


void Sequences(){
	std::vector<int> vInt;
	int no;

	std::cout << "Enter the no's and -1 to stop";
	std::cin >> no;
	while(no!=-1)
	{
		vInt.push_back(no);
		std::cin >> no;
	}

	int number;
	std::cout << "Enter a no. to search : ";
	std::cin >>number;

	std::vector<int>::iterator it = std::find(vInt.begin(),vInt.end(),number);

	if(it == vInt.end()){
		std::cout << "Element not found";
	}
	else{
		std::cout << "Element found\n";
		for(int i=0;i<vInt.size();i++)
		{
			std :: cout << vInt[i] << " ";
		}
	}



}


int main(){
	Sequences();
}