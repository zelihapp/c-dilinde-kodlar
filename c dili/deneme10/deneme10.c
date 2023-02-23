#include <stdio.h>
    int main() {
    	int islem;
    	int bakiye = 1000;
    	int tutar;
    	
    	printf("Islemler\n 1:Para cekme\n 2:Para yatirma\n 3:Havale yapma\n 4:Bakiye sorgulama\n 5:Kart iade\n\n\n");
    	
    	printf("Islemi Seciniz:");
    	scanf("%d" ,&islem);
    	
    	switch(islem) {
    		case 1 : 
    		    printf("Bakiyeniz: %d\n" ,bakiye);
    		    printf("Cekilecek Tutar:");
    		    scanf("%d" ,&tutar);
    		    if (tutar>bakiye) {
    		    	printf("Bakiye Yetersiz.");
    		    	
				}
				bakiye -= tutar;
				printf("Bakiyeniz: %d" ,bakiye);
				break;
				
				
			case 2 :
				printf("Bakiyeniz: %d\n" ,bakiye);
				printf("Yatirilacak Tutar:");
				scanf("%d" ,&tutar);
				
				bakiye += tutar;
				printf("Bakiyeniz: %d" ,bakiye);
				break;
				
			case 3 : 
			     printf("Bakiyeniz: %d" ,bakiye);
			     printf("Havale Edilecek Tutar:");
			     scanf("%d" ,&tutar);
			     if (tutar>bakiye) {
			     	printf("Bakiyeniz Yetersiz\n");
			     	
				 }
				 bakiye -= tutar;
				 printf("Bakiyeniz: %d" ,bakiye);
				 break;
				 
			case 4 :
				printf("Bakiyeniz: %d" ,bakiye);
				break;
				
			case 5 :
				printf("Kart Iade Edildi.");
				break;
				
				
			default:
			    printf("Bilinmeyen Islem.");
			    break;
			    
		}
		return 0;
	}