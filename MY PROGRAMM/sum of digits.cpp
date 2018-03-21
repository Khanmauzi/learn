#include<stdio.h>
int main()
{	int sum=0,n,r;
	printf("enter a no \n");
	scanf("%d",&n);
	while(n!=0)
	{
	r=n%10;
	n=n/10;
	sum=sum+r;
		
		
	}
	printf("%d",sum);
	return 0;
}
