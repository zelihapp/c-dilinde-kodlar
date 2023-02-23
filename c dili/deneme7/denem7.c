#include <stdio.h>

    int main() {
    	
    	int vize1 , vize2 , final;
    	float dersort;
    	
    	printf("vize notunu giriniz:");
    	scanf("%d" ,&vize1);
    	printf("vize notunu giriniz:");
    	scanf("%d" ,&vize2);
    	printf("final notunu giriniz:");
    	scanf("%d" ,&final);
    	
    	dersort = (vize1+vize2+final)/3.0;
    	
    	if (dersort >60) {
    		printf("Dersten Gectiniz.");
    		
		}
		else if (dersort >50) {
			printf("dersten Bute kaldiniz.");
			
		}
		else {
			printf("Dersten kaldiniz.");
			
		}
	}