#include <iostream>
using namespace std;

void TOH(int n,char sour , char temp, char des)
{
	if(n==1)
	{
		cout<<"Move Desk"<<n<<"   "<<"from"<<"  "<<sour<<"  "<<"to"<<"  "<<des<<endl;
		return;
	}
	
	TOH(n-1,sour,des,temp);
	cout<<"Move Desk"<<n<<"   "<<"from"<<"  "<<sour<<"  "<<"to"<<"  "<<des<<endl;
	TOH(n-1,sour,des,temp);
}

int main()
{
	int n;
	
	cout<<"Enter number of discs:";
	cin>>n;
	
	TOH(n,'a','b','c');
	return 0;
}
