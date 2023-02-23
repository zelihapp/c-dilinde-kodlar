#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Zeliha POLAT
//
// matematiksel fonksiyonlarda mutlak deger ve logaritma kullanimi 


/* mutlak deger => floating absolute (fabs)
   logaritma => log */

int main() {
	
	double sayi,sonuc,sonuc1;
	printf("Sayiyi girin: ");
	scanf("%lf",&sayi);
	
	/*sonuc=fabs(sayi);
	printf("Sonuc: %lf",sonuc); */
	
	sonuc1=log(sayi);
	printf("Sonuc: %lf",sonuc1);
	
	return 0;
}
