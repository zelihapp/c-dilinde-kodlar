#include <stdio.h>

    int main() {
    	
    	// cemberin alani pi*r*r  cemberin cevresi 2*pi*r
    	
    	printf("**CEMBERIN ALANI VE CEVRESI**\n");
    	printf("*****************************\n");
    	float yaricap,alan,cevre,pi_sayisi;
    	pi_sayisi=3.14;
    	
    	printf("Yaricap Degerini Giriniz:  ");
    	scanf("%f",&yaricap);
    	
    	alan=pi_sayisi*yaricap*yaricap;
    	cevre=2*pi_sayisi*yaricap;
    	
    	printf("Alan:  %f\n",alan);
    	printf("Cevre:  %f",cevre);
    	
    return 0;
    
	}
