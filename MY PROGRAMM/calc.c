#include<stdio.h>
void main()
{
	int a,b,i;
	printf("enter  2 no\n");
	scanf("%d%d",&a,&b);
	printf("enter the operation you want to perform\n 1:sum\n 2:sub\n 3:multiplication\n 4:division\n");
	scanf("%d",&i);
	switch(i)
	{
	case(1):printf(" %d is sum \n ",a+b);
	break;
	case(2):printf("%d is sub",a-b);
	break;
	case(3):printf("%d is multiplication",a*b);
	break;
	case(4):printf("%d is division",a/b);
	default :printf("cool");
		
		
		
	}
	
}
