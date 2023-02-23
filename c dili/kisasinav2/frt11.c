#include <stdio.h>
#include <stdlib.h>

// Bir fonksiyonda iki return kullanimi 

int artik_yil(int yil) {
	
	if (yil % 4 == 0 && yil % 100 != 0 || yil % 400 == 0)
	return 1;
	else 
    return 0;
  }
 
  
int main() {
	int yil;
	
	printf("Yil giriniz: ");
	scanf("%d",&yil);
	
	if (artik_yil(yil))
	printf("%d artik yildir",yil);
	else 
	printf("%d artik yil degildir",yil);
	
	return 0;
}
