#include <stdio.h>

    int main() {
    	
    	int vize1 , vize2 , final;
    	float dersort;
    	
    	printf("1.vize notunu giriniz:");
    	scanf("%d" ,&vize1);
    	printf("2.vize notunu giriniz:");
    	scanf("%d" ,&vize2);
    	printf("Final notunu giriniz:");
    	scanf("%d" ,&final);
    	
    	dersort = (vize1+vize2+final)/3.0;
    	
    	if (dersort > 50) {
    		
    		printf("Dersten Gectiniz.");
    		
		}
		else {
			
			printf("Dersten Gectiniz.");
			
		}
		
		return 0;
	}