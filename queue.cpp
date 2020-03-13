#include <iostream>

using namespace std;


int front = -1;
int rear = -1;

void enqueue(int x,int Q[],int n)
{
	if(rear == n-1)
	{
		cout << "Overflow";
	}
	else if(front==-1 && rear == -1)
	{
		front = rear = 0;
		Q[rear] = x;
	}
	else
	{
		rear++;
		Q[rear] = x;
	}
}

void dequeue(int Q[],int n)
{
	if(front==-1 && rear == -1)
	{
		cout <<"Empty";
	}

	else if (front == rear)
	{
		front = rear = -1;
	}
	else
	{
		cout << Q[front]<<endl;
		front++;

	}


}

void display(int Q[],int N)
{
	if(front==-1 && rear == -1)
	{
		cout <<"Empty";
	}
	else
	{
		for(int i = front;i<rear+1;i++)
		{
			cout <<Q[i];
		}
		cout << endl;
	}
}

int main()
{
	int n,x;
	cout <<"Enter no. of elements";
	cin >>n;
	int Q[n];

	for(int i=0;i<n;i++)
	{
		cout <<"Enter element to enter into queue";
		cin >> x;
		enqueue(x,Q,n);	
	}
	
	//enqueue(3,Q,n);
	//enqueue(4,Q,n);
	//enqueue(5,Q,n);
	display(Q,n);
	//peek();
	dequeue(Q,n);
	dequeue(Q,n);




}