#include<stdio.h>
void main()
{
	int i,sum=0,n;
	printf("enter a no  upto which you want sum of square\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{sum=sum+(i*i);
		
	}
	printf("%d is sum of square",sum);
}
