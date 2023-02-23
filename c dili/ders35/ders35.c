#include <stdio.h>
#include <stdlib.h>

/*0 ve 15 cocuk 15 ve 30 genc 30 ve 55 yetiskin 55 ile 120 120ustu komik ifade else yanlis */
void donem(int kullanici_yas)
	{
		if (kullanici_yas >= 0 && kullanici_yas < 15)
		{
			printf("Cocuksunuz");
		}
		else if (kullanici_yas >=15 && kullanici_yas<30)
		{
			printf("Gencsiniz");
		}
		else if (kullanici_yas >= 30 && kullanici_yas<55)
		{
			printf("Yetiskinsiniz");
		}
		else if (kullanici_yas >= 55 && kullanici_yas < 120)
		{
			printf("Yaslisiniz");
		}
		else if(kullanici_yas >= 120)
		{
			printf("Allah daha uzun omurler versin");
		}
		else 
		{
			printf("Yanlis ifade girdiniz");
		}
	}
int main() {
	int yas;
	printf("Yasinizi giriniz: ");
    scanf("%d",&yas);
    donem(yas);
	return 0; // return yas yaptigim zaman da dogru return 0 yaptigim zaman da dogru oluyor neden??
	}

