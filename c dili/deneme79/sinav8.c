#include <stdio.h>

   int main() {
   	
   	int i,n,t1,t2,t3;
   	
   	printf("Klavyeden bir sayi giriniz:  ");
   	scanf("%d",&n);
   	
   	t1=0;
   	t2=0;
   	t3=0;
   	
   	for(i=1 ; i<=n ; i++)
   	{
   		t1=t1+i;
	   }
	   
	for(i=1  ; i<=n ; i=i+2)
	{
		t2=t2+i;
	}
	
	for(i=2  ; i<=n ; i=i+2)
	{
		t3=t3+i;
	}
	
	printf("%d  %d  %d",t1,t2,t3);
	return 0;
   	
   }
