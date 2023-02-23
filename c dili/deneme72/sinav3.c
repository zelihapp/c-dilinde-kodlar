#include <stdio.h>

  int main() {
  	int n,t,i,j;
  	t=0;
  	
  	for(i=1 ; i<=2 ; i++)
	  {
	  	t=5;
	  	
	  	for(j=1  ; j<=3 ; j++)
	  	{
	  		t=t+i*j;
		  }
	}
	
	printf("%d",t);  	
  	return 0;
  }
