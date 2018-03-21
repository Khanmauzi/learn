#include<stdio.h>
 void main()
 {
 	int i,j=5;
 	for(i=1;i<=5;i++)
 	
	{
	for(j=1;j<=9;j++)
	 
	 {
	 if(j<=5&&(i+j)==6||j>=5&&(j-i)==4||i==5)
	
	 
	 printf("*");
	 else
	 printf(" ");
}
 	printf("\n");	
	 }
 }

