#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top = -1;

void push()
{
	int x;
	cout<<"Enter data: "<<endl;
	cin>>x;
	
	if(top == N-1)
	{
		cout<<"Stack is full"<<endl;
	}
	
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	int item;
	if(top == -1)
	{
		cout<<"Stack is empty."<<endl;
	}
	
	else
	{
		item = stack[top];
		top --;
		cout<<"The poped data is:"<<item<<endl;
	}
}

void peek()
{
	if(top == -1)
	{
		cout<<"Stack is empty."<<endl;
	}
	
	else
	{
		cout<<"The top of the stack data is :"<<stack[top]<<endl;
	}
}

void display()	
{
	int i;
	if(top == -1)
	{
		cout<<"Stack is empty."<<endl;
	}
	
	else
	{
		for(i=top; i>=0;i--)
		{
			cout<<"The data in stack is :"<<stack[i]<<endl;
		}
	}
	
}

int main()
{
	int choice;
	do
	{
		cout<<" \n Enter your choice :\n 1.push \n 2.pop \n 3.peek \n 4.display"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				push();
				break;
				
			case 2:
				pop();
				break;
				
			case 3:
				peek();
				break;
				
			case 4:
				display();
				break;
				
			default:
				cout<<"Invalid choice"<<endl;
		}
	}
		while(choice!=0);
					
	return 0;	
}
