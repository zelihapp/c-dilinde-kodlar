#include <stdio.h>

// dik ucgen cizimi 

   int main() {
   	
   	int i,j,satir;
   	
   	printf("Satir sayisi: ");
   	scanf("%d",&satir);
   	
   	for (i=0;i<satir;i++) {
   		
   		j=0;
   		
   		while (j<i) {
   			
   			printf(" * ");
   			j++;
   			
		   }
		   
		   printf("\n");
		   
	   }
	   
	   return 0;
	   
   }
