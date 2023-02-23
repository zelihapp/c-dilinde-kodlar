#include <stdio.h>

// dikdortgenin alanini veren program
   int main()  {
   	
   	int n,h,alan;
   	
   	printf("Kenar uzunlugu giriniz:  ");
   	scanf("%d",&n);
   	
   	printf("Yuksekligi giriniz: ");
   	scanf("%d",&h);
   	
   	alan= (n*h)/2;
   	
   	printf("Alan:  %d",alan);
   	
   	return 0;
   }
