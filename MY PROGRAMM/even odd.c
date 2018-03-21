#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
 {
  int i,n;
  printf("enter a no\n");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  {
  	if(i%2==0){
	  
  	printf("%d no is even\n",i);
  	
  }
  else{
  	printf("%d no is odd\n",i);
  }
}
 
}

