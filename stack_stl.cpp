#include <iostream>
#include <stack>
using namespace std;
int match_parenthesis()
{
	
		cout<<"Enter the string";
		stack<char> s;
		string str;
		cin>> str;

		for (int i = 0; i < str.length(); ++i)
		{

			if (str[i]=='('||str[i]=='{'||str[i]=='[' ) 
			{
				s.push(str[i]);
			}
			else{
				if (s.empty())
				{
					cout<<"Mismatch";
					return 1;
				}

				else{
					if (str[i]=='}' && s.top()=='{' )
					{
					s.pop();	
					}
					else if (str[i]==']' && s.top()=='[' )
					{
					s.pop();	
					}
					else if (str[i]==')' && s.top()=='(' )
					{
					s.pop();	
					}
				}
			}
		}
	if (!s.empty()) {
		cout << "Mismatch\n";
		return 1;
	}
	cout << "Match\n";

	return 0;
}

int main(){

	match_parenthesis();
	return 0;
}
