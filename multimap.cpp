#include <iostream>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int UsingMap() {
	
	multimap <int ,string> m;
	int n;
	cout << "Enter the no. of element to insert";
	cin >> n;

	for(int i = 0; i <n;i++)
	{
		
		int a;

		string str;

		cin >> a >> str;
		m.insert(pair<int , string >(a ,str));	
	}
	
	//m.insert(pair<int , string >( 45 ,"Harshal"));
	//m.insert(pair<int , string >( 19 ,"Pune"));
	/*m.insert(pair<int , string >( 54 ,"CDAC"));
	m.insert(pair<int , string >( 30 ,"ACTS"));
	m.insert(pair<int , string >( 30 ,"Pashan"));*/



	multimap <int ,string> ::  iterator itr;

	cout << "\nThe multimap is : \n";
	cout << "\tKEY\tVALUE\n";

	for(itr = m.begin(); itr != m.end(); ++itr)
	{
		
		if(itr->first < 40)
		{
			
			cout <<"\t"  << itr->first <<"\t" << itr->second << endl;
		}
		//cout << "----------------------------------------------------";
		
	}

	cout << "-----------------------\n";
	for(itr = m.begin(); itr != m.end(); ++itr)
	{
		
		
		//cout << "----------------------------------------------------";
		if(itr->first > 40)
		{
			
			cout <<"\t"  << itr->first <<"\t" << itr->second << endl;
		}
	}



}


int main() {
	//Sequences();
	//MatchParenthesis();
	//SortUsingPriorityQueue();
	//UsingSet();
	UsingMap();
	return 0;
}
