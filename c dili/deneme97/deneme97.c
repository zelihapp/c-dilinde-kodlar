#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Zeliha POLAT
//
// matematiksel fonksiyonlarda ceil(uste yuvarlama) / floor(alta yuvarlama) kullanimi 
// double icin kullanilacak olan yuzde komutu => %lf dir veriyi almak icin 

int main() {
	
	double sayi,sonuc1,sonuc2;
	
	printf("Degeri girin: ");
	scanf("%lf",&sayi);
	
  /*sonuc1=floor(sayi);
	printf("Sonuc:  %f",sonuc1);  */
	
	sonuc2= ceil(sayi);
	printf("Sonuc: %f",sonuc2);
	
	return 0;
}
