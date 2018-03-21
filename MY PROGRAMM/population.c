#include<stdio.h>
void main()
{
	float i,n,roi,pop;
	printf("enter the no of people\n");
	scanf("%f",&n);
	printf("rate of increase of population\n");
	scanf("%f",&roi);
	
		while(n<=50000)
		{
			
			n+=(n*roi/100);
			i++;}
          	
          	printf("%f is year taken",i);

}
