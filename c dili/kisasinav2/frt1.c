#include <stdio.h>
#include <stdlib.h>

/* 4 ile tam b�l�n�yorsa VE 100'e tam b�l�nm�yorsa VEYA
   400 'e tam b�l�n�ryorsa o artik yildir.*/
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
