#include <stdio.h>
#include <stdlib.h>


void  main()
 {int i,first=0,next,second=1,n;
 printf("enter the range of series \n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 
 if(i<=1)
 next=i;
 else
{
  next=first+second;
 first=second;
 second=next;
}
 printf("series is %d\n",next);
}
	
}
