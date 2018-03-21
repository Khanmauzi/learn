#include<stdio.h>
//#include<conio.h>
void main()
{
	int i,n[20],j;
	printf("enter the range of no");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
	
	printf("enter the no %d \n",i+1);
	scanf("%d",&n[i]);
	}
	for(i=j-1;i>=0;i--)
	{
	printf("%d ",n[i]);
	
		
	}
}
