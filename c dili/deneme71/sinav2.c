#include <stdio.h>

   int main() {
    	
    	/*int t;
    	
    	for(t=5 ; t<=32 ; t=t+2)
    	
    	printf("\n%d",t);  */
    	
    	// 1den 5e kadar sayilari ekrana yazdiran program
    	
    /*	int i;
    	
    	for(i=1 ; i<=5 ; i++)
    	
    	printf("%d\n",i);  */
    	
    	
    	// n sayisinin faktoriyeli 
    	
    	int n,faktoriyel,sayac;
    	
    	printf("n sayisini giriniz:  ");
    	scanf("%d",&n);
    	
    	faktoriyel=1;
    	sayac=1;
    	
    	for(sayac=1 ; sayac<=n ; sayac++)
		{
			faktoriyel=faktoriyel*sayac;
			
		}   
		
		printf("%d",faktoriyel);
		 	
		return 0;
	}
