#include <stdio.h>
   
     int main() {
     	
     	int n,hane =0,toplam = 0;
     	
     	printf("Sayiyi giriniz:");
     	scanf("%d" ,&n);
     	
     	do {
     		
     		toplam += (n %10);
     		 
     		 hane++;
     		 
     		 n = n /10;
     		 
		 }
		 while ( n>0) ;
		 
		 printf("rakamlari toplami %d %d haneli",toplam,hane);
		 
		 
     	
     return 0;	
     
	 }