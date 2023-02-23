#include <stdio.h>
     int main() {
     	
     	int vize1 , vize2 , final;
     	float dersort;
     	
     	float ortalama;
     	
     	
     	printf("1.Vize notunu giriniz:");
     	scanf("%d" ,&vize1);
     	printf("2.Vize notunu giriniz:");
     	scanf("%d" ,&vize2);
     	printf("Final notunu giriniz:");
     	scanf("%d" ,&final);
     	printf("universite ortalamasini giriniz:");
     	scanf("%f" ,&ortalama);
     	
     	
     	dersort = (vize1+vize2+final)/3.0;
     	
     	if (dersort>60) {
     		printf("Dersten Gectiniz.");
     		
     		 
		 }
		 else if (dersort>50) {
		 	
		 	printf("Dersten Bute Kaldiniz.\n");
		 	
		 	if (ortalama < 2.50 ) {
		 		
		 		printf("Butu gecsen bile dersi tekrar al cunku ortalaman dusuk");
		 		
			 }
		 	
		 	  
		 }
		 else {
		 	
		 	printf("Kaldiniz.");
		 }
		 
		 
	return 0;
		 
	 }
