#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;

};

Node* head;


void insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;

	
}

void Print(){
	Node* temp = head;
	cout <<"List is ";
	while(temp !=NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}	
	cout << "\n";
}

int main(){

	head = NULL;
	int n,x;
	cout << "Enter no. of elements : ";
	cin >> n;

	for(int i=0;i<n;i++)
	{
		cout <<"Enter elements :";
		cin >> x;
		insert(x);
		Print();
	}



}