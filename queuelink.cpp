//Implement queue using Linked list
#include <iostream>

using namespace std;

struct Qnode
{
	int data;
	Qnode * next;
	
};

Qnode* front = 0;
Qnode* rear = 0;

void Enqueue(int x){

	Qnode * temp = new Qnode();
	temp->data = x;
	temp->next = 0;

	if(front ==0 && rear == 0)
	{
		front = rear = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}

}

void display(){
	Qnode* temp1 = new Qnode();
	if(front ==0 && rear ==0)
	{
		cout <<"Queue is empty";
	}
	else
	{
		temp1=front;
		while(temp1!=0)
		{
			cout << temp1->data;
			temp1 = temp1->next;
		}

	}
}

void dequeue(){
	Qnode* temp1 = new Qnode();
	if(front ==0 && rear ==0)
	{
		cout <<"Queue is empty";
	}
	else{
		front=front->next;
		free(temp1);
	}

}

void peek()
{
	if(front ==0 && rear ==0)
	{
		cout <<"Queue is empty";
	}
	else
	{
		cout << front->data;
	}
}


int main()
{
	Enqueue(5);
	Enqueue(0);
	Enqueue(4);
	display();
	dequeue();
	peek();
}