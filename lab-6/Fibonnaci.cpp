#include<iostream>
using namespace std;
int fibo(int x)
{
	if((x==0)||(x==1))
	{
		return x;
	}
	else
	{
		return (fibo(x-1)+fibo(x-2));
	}
}

int main()
{
	int x,i=0;
	cout<<"Enter the number of terms of series: ";
	cin>>x;
	
	cout<<"Fibonnaci Series : ";
	
	while(i<x)
	{
		cout<<" "<<fibo(i);
		i++;
	}
	return 0;
}
