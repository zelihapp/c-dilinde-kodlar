#include <stdio.h>
#include "fonksiyon.h" 
int main() {
	int a,b,x,y,z,p; // parametre isteyenler icin  .parametre istemeyenler icin zaten kendimiz tanimliyoruz 
    topla1() ;
    topla2(x,y);
    topla3();
    topla4(z,p);
 /* printf("1.sayi giriniz: ");
  scanf("%d",&a);
  printf("2.sayi giriniz: ");
  scanf("%d",&b);   (bir daha burada yazmaya gerek yok galiba)  */
  
	return 0;
}
// void in oldugu yerde return olmaz voidde deger donmuyor 

