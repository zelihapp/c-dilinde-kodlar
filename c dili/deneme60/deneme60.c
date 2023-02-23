#include <stdio.h>
   
     int main() {
     	
     	int N;
     	int T=0;
     	int I=1;
     	int J,K;
     	
     	printf("N gir:\n" , N);
     	scanf("%d" ,&N);
     	
     	
     	      for(I;I<=N;I++) {
     	      	printf("%d\n" ,I);
     	      	for(J=1;J<=N;J++){
     	      	 	for(K=1;K<=N;K++) {
     	      	 		
     	      	 		T=T+I+J+K;
     	      	 		
						}
					}
			   }
			   
			   
			   printf("Yeni T=%d" ,T);
			   

    
     	return 0;
	 }