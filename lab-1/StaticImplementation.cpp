#include <iostream>
#define size 5
using namespace std;
int main()
{
	int i,arr[size],element;
	bool found;
	cout<<"enter your data in array"<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element you want to know the location of : "<<endl;
	cin>>element;
	for(i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			cout<<"the element is in "<<i+1 <<"position "<<endl;
			found=true;
		}
	}
	if(!found)
	{
		cout<<"The searched element is not avilable in the array"<<endl;
	}
}
