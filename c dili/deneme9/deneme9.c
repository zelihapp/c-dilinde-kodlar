#include <stdio.h>

     int main() {
     	
     	int vize1 , vize2 , final;
     	float okulortalama;
     	float dersort;
     	
     	printf("1.vize:");
     	scanf("%d" ,&vize1);
     	printf("2.vize:");
     	scanf("%d" ,&vize2);
     	printf("final notu:");
     	scanf("%d" ,&final);
     	printf("okulortalamasi:");
     	scanf("%f" ,&okulortalama);
     	
     	
     	dersort = (vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);
     	
     	
     	if (dersort >= 90) {
     		printf("Harf notunuz - AA ve Ders ortalamaniz : %f" ,dersort);
     		
		}
		else if (dersort >= 85  && dersort<90) {
		 	printf("Harf notunuz - BA ve Ders ortalamaniz : %f" ,dersort);
		 	
		}
		else if (dersort >= 80  && dersort<85) {
			printf("Harf notunuz - BB ve Ders ortalamaniz : %f" ,dersort);
			
		}
		else if (dersort >= 75  && dersort<80) {
			printf("Harf notunuz - CB ve Ders ortalamaniz : %f" ,dersort);
			
		}
		else if (dersort >= 70  && dersort<75) {
			printf("Harf notunuz - CC ve Ders ortalamaniz : %f" ,dersort);
			if (okulortalama < 2.5) {
				printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
				
			}
			
		}
		else {
			printf("Harf notunuz - FF ve Ders ortalamaniz : %f" ,dersort);
			printf("Dersten kaldiniz.");
			
		}
		
		
		return 0;
		
		
		 
     	
	 }