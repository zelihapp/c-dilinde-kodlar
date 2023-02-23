#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int secim;
	float x , y , sonuc;
	
	printf("Iki Sayi Girin: ");
	scanf("%f %f",&x,&y);
	
	puts("*****MENU*****");
	puts("[1] Toplama");
	puts("[2] Cikarma");
	puts("[3] Carpma");
	puts("[4] Bolme");
	
	printf("Seciminiz: ");
	scanf("%d",&secim);
	
	switch (secim) {
		
		case 1 : 
		    sonuc = x + y;
		    printf("Toplam:  %f\n",sonuc);
		    break;
		
		case 2 :
			sonuc = x - y;
			printf("Fark:  %f\n",sonuc);
			break;
			
		case 3 :
			sonuc = x * y;
			printf("Carpim:  %f\n",sonuc);
			break;
			
		case 4 :
			sonuc = x / y;
			printf("Bolum:  &f\n",sonuc);
			break;
			
		default : 
	    	printf("Hatali Secim Yaptiniz.");
	}
	
	return 0;
}
