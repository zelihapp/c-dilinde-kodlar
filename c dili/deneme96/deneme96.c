#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Zeliha POLAT
//
// matematik fonksiyonlar 

int main() {
	
	int sayi;
	double sonuc;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	sonuc=sqrt(sayi); // sqrt karekok alma fonksiyonudur 
	printf("Sonuc:  %.4f",sonuc);  // %f nin onune %.4f denirse sonucu bulduktan sonra virgulden sonra 4 basamagi ekrana yazar

	return 0;
}
