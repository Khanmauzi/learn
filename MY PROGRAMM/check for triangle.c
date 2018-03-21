#include<stdio.h>
void main()
{int a,b,c;
printf(" enter the value of sides\n ");
scanf("%d%d%d",&a,&b,&c);

(a==b&&b!=c)||(a==c&&b!=c)||(b==c&&b!=a)?printf("the triangle is isoscales")
:(a==b&&b==c)?printf("the triangle is equilateral"):
(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)?printf("the triangle is right angled ")
:printf("scalane triangle");  


	
}
