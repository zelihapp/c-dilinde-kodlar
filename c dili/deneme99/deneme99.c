#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Zeliha POLAT
//
// matematiksel fonksiyonlarda sin ve cos kullanimi 


int main() {
	
	double derece,sonucsin,sonuccos;
	printf("Dereceyi Giriniz: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("Sinus: %lf\n",sonucsin);
	
	sonuccos=cos(derece);
	printf("Cosinus: %lf",sonuccos);
	
	
	return 0;
}
