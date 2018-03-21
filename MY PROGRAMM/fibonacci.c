#include<stdio.h>
#include<conio.h>
void main()
{
	int i,first=0,second=1,n,next;
	printf("enter the range of series \n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("%d",first);
		next=first+second;
		first=second;
		second=next;
	}
}
