#include <stdio.h>

   int main()  {
   	
    int t1=0,t2=1,nextterm=0,n;
    
    printf("Pozitif bir sayi girin:  ");
    scanf("%d",&n);
    
    // Her zaman 0 ve 1 olan ilk iki terimi goruntuler
    
    printf("Fibonacci Dizisi: %d,%d",t1,t2);
    
    nextterm=t1+t2;
    
    while (nextterm<=n) {
    	printf("%d",nextterm);
    	t1=t2;
    	t2=nextterm;
    	nextterm:t1+t2;
	}
   	return 0;
   }
   	
  
