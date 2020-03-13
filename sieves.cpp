#include <iostream>
#include <set>
using namespace std;

int sieves(){

	set<int> elems;
	int no;
	cout << "Enter a no :  ";
	cin >> no;

	for (int i = 0; i < no-1; ++i)
	{
		elems.insert(i+2);
	}
	
	set<int>:: iterator it1 = elems.begin();
	//set<int>:: iterator it2 = elems.second (); 

	while(it1 != elems.end()){
		for(int i = 2; i<= (*it1)/2; i++)
		{
			if((*it1)%i == 0)
			{
				elems.erase(*it1);
				it1 = elems.begin();
				break;
			}
		}
		it1++;
	}


	set<int>::iterator it = elems.begin();
	while (it != elems.end()) {
		cout << *it << "\n";
		++it;
	}

	return 0;
}




int main(){


	sieves();

}