#include <stdio.h>
#include <stdlib.h>

//Zeliha POLAT
//
// girilen sayinin asal olup olmadigini fonksiyon yardimiyla bulma 


int asal_mi(int sayi) {
	
	int i;
	
	for(i=2 ; i<sayi ; i++)
	{
		if (sayi % i == 0) {
			return 0; // asagidaki hic bir seyi kontrol etmeden sonlanir 
		}
	
	}
  	return 1;
}

int main() {
	
	int n;
	printf("Bir Sayi giriniz: ");
	scanf("&d",&n);
	
	if (asal_mi(n) == 0) {
		
		printf("Bu sayi asal degildir ");
		
	}
	else {
		printf("Bu sayi asal sayidir ");
	}
	
	return 0;
}
