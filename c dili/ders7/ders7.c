#include <stdio.h>
#include <stdlib.h>

//Zeliha POLAT
//
// girilen bir sayinin bu sayinin faktoriyelini fonksiyon yardimiyla bulalim

//ilk main blogu calisir 

int faktoriyel(int sayi) {
	
	int faktoriyel = 1;
	
	for (;sayi>0 ; sayi--) {
		
		faktoriyel=faktoriyel*sayi;
	}
	return faktoriyel;
}
int main() {
	
	int n;
	printf("Faktoriyelini istediginiz sayiyi girin: ");
	scanf("%d",&n);
	
	printf("Faktoriyel:  %d",faktoriyel(n));
	
	return 0;
}
