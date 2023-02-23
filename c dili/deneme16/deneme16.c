#include <stdio.h>
#include <stdlib.h>

     int main() {
     	
     	int ilksayi;
     	int ikincisayi;
     	int i;
     	
     	printf("%d\n%d\n",ilksayi,ikincisayi);
     	
     	for(i = 0; i < 12 ; i++) {
     		
     		int temp = ikincisayi;
     		
     		ikincisayi += ilksayi;
     		
     		ilksayi = temp;
     		
     		
     		printf("%d\n" ,ikincisayi);
     		
     		
		 }
		 return 0;
		 
	 }