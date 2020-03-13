#include <iostream>

using namespace std;


class Queue{
	
	public  :
			int arr[100];
		int front;
		int rear;
		int size;
		
		

		void Insert();
		int Enqueue(int n);
		int  Dequeue();
		bool isfull();
		bool isempty();
		void Display();




};

void Queue :: Insert()
{
	cout <<"Enter size : ";
	cin >>size;

	for(int i=0;i<size;i++)
	{
		Queue q;
		q.Enqueue(i);
	}
}

int Queue ::  Enqueue(int n)
{
	
	if(rear == size-1 && front == 0 || rear == (front-1)%(size-1))
	{
		cout << "Queue is full";
		return 0 ;
	}

	else if(front == -1)
	{
		front = rear = 0;
		arr[rear] = n;
	}

	else if(rear = size-1 && front !=0)
	{
		rear = 0;
		arr[rear] = n;
	}

	else {
		rear++;
		arr[rear] = n;
	}


}

int  Queue::Dequeue(){

	if(front == -1)
	{
		cout << "Queue is empty";
	}

	int data = arr[front];
	arr[front] = -1;
	if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if (front == size -1 )
	{
		front = 0;
	}
	else 
	{
		front++;
	}

	return data;

}



bool Queue ::  isfull(){
	if(front == 0 && rear == size-1)
		cout << "Queue is full";
		return true;
}

bool Queue :: isempty(){
	if(front == -1 && rear == -1)
		cout << "Queue is empty";
		return true;
}

void Queue :: Display(){
	for(int i=0;i<size;i++)
	{
		cout << arr[i];
	}
}


int main(){
	
	

	Queue q;
	q.Insert();
	//q.Enqueue(5);
	//q.Enqueue(6);
	//q.Enqueue(7);
	q.Display();


}