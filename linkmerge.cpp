#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* head = NULL;



void insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
}

int main(){
	int n,x;
	cout << "Enter the elements to insert :";
	cin >>n;

	for(int i=0;i<n;i++)
	{
		cout << "Enter elements";
		cin >> x;
		insert(x);
	}
}