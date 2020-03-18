  
//program to add your data in stack dynamically and find the position of data in the stack

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
	int i,size,element,*p;
	bool found;
	printf("Enter the size of array you want :");
	scanf("%d",&size);
	p=(int*)calloc(size,sizeof(int));
	printf("Enter data in your array \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&*(p+i));
	}
	printf("Enter the element you want to know the position of \n");
	scanf("%d",&element);
	for(i=0;i<size;i++)
	{
		if(*(p+i)==element)
		{
			printf("The element is in %d position \n",i+1);
			found=true;
		}
	}
	if(!found)
	{
		printf("the element is not available in the stack");
	}
}
