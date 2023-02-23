#include <stdio.h>
#include <stdlib.h>

/* 4 ile tam bölünüyorsa VE 100'e tam bölünmüyorsa VEYA
   400 'e tam bölünüryorsa o artik yildir.*/
int main() {
  
  int yil;
  printf("Bir Yil Giriniz: ");
  scanf("%d",&yil);
  
  if(yil % 4 == 0 && yil % 100 != 0 || yil % 400 == 0 ) {
  	
  	printf(" %d Artik Yildir",yil);
  }
	else {
		printf(" %d Artik Yil Degildir.",yil);
	}
	return 0;
}
