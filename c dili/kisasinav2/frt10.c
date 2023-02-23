#include <stdio.h>
#include <stdlib.h>

// iki sayiyi toplayan ve ekrana yazdiran program fonksiyonla 

int topla(int x,int y){
	return (x+y);
}

int main() {
	int x,y,toplam;
	
	printf("Iki Sayi giriniz: ");
	scanf("%d %d",&x,&y);
	
    //	toplam=topla(x,y);   (printf icindeki fonksiyon kaldirilip bu da kullanilabilir)
	
	printf("%d ve %d nin toplami %d dir",x,y,topla(x,y));

	return 0;
}
