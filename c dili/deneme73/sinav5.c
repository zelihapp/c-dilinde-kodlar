#include <stdio.h>

   int main () {
   	 int sayi,sayac,faktoriyel;
   	 
   	 printf("sayi giriniz: ");
   	 scanf("%d",&sayi);
   	 
   	 sayac=1;
   	 faktoriyel=1;
   	 
   	 do 
   	 {
   	 	faktoriyel=faktoriyel*sayac;
   	 	sayac++;
	}
	while (sayac<=sayi);
	
	printf("%d",faktoriyel);
	return 0;
   }
