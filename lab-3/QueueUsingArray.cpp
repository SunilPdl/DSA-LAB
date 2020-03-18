#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
	if(front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear]=x;
	}
	
	else if(rear == N-1)
	{
		cout<<"Queue is full."<<endl;
	}
	
	else
	{
		rear ++;
		queue[rear]=x;	
	}
}

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		cout<<"Queue is empty."<<endl;
	}
	
	else if(front == rear)
	{
		front == rear ==-1;
	}
	
	else
	{
		cout<<"\n Dequeued element is: "<<queue[front]<<endl;
		front ++;
	}
}

void peek()
{
		if(front == -1 && rear == -1)
	{
		cout<<"Queue is empty."<<endl;
	}
	else
	{
		cout<<"\n The top of the element is: "<<queue[front]<<endl;
	}
}

void display()
{
	int i=0;
	
		if(front == -1 && rear == -1)
	{
		cout<<" \n Queue is empty. "<<endl;
	}
	
	else
	{
		cout<<"The queue is:"<<endl;
		for(i=front;i<rear+1;i++)
		{
			cout<<"The elements in the queue is :"<<queue[i]<<endl;
		}
	}
}

int main()
{
	enqueue(2);
	enqueue(3);
	enqueue(6);
	enqueue(8);
	enqueue(30);
	display();
	peek();
	dequeue();
	dequeue();
	display();
	return 0;
}



