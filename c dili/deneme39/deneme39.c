#include <stdio.h>

//fibonacci dizisi
   int main() {
   	
   	 int a,b,c,i;
   	 a=1;
   	 b=1;
   	 
   	 printf("%d",a);
   	 printf("%d",b);
   	 
   	 for(i=1;i<=8;i++)
   	 {
   	 	c=a+b;
   	 	a=b;
   	 	b=c;
   	 	printf("%d\n",c);	
	}
   	
   	return 0;
   	
   }
  
  
