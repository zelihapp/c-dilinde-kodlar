#include <stdio.h>
#include <stdlib.h>
#include <time.h>

     int main() {
     	int BS;
     	int s;
     	int tahmin;
     	srand(time(NULL));
     	BS=rand()%5;
     	printf("tahmin gir:\n");
     	scanf("%d" ,&tahmin);
     	    s++;
     	
     	while(tahmin != BS) {
        while(tahmin>BS){
        	printf("Daha kucuk sayi gir:");
        	break;
		}
		while(tahmin<BS){
			printf("Daha buyuk sayi gir:");
			break;
			
		}
		scanf("%d" ,&tahmin);
		s=s+1;
		
     		
     		
     		
		 }
		 
		 
			
			printf("%d sayisini %d tahminde buldunuz." ,BS,s);
			
			return 0;
	}
		 
		 