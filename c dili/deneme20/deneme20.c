#include <stdio.h>

    int main(){
    	
    	char kitapadi[20],yazari[15],sayfasayisi[3],basimtarihi[4],basimevi[20],turu[10];
    	
    	printf("Kitap Adi:  ");
    	scanf("%s",kitapadi); /*string oldugundan dolayi atama isleminde & kullanilmaz*/
    	
    	printf("Kitabin Yazari:  ");
    	scanf("%s",yazari);
    	
    	printf("Sayfa Sayisi:  ");
    	scanf("%s",sayfasayisi);
    	
    	printf("Basim Tarihi:  ");
    	scanf("%s",basimtarihi);
    	
    	printf("Basim Evi:  ");
    	scanf("%s",basimevi);
    	
    	printf("Kitabin Turu:  ");
    	scanf("%s",turu);
    	
    	printf("\n\n");
    	printf("*****KITAP TANITIMI*****\n");
    	printf("Kitap Adi:  %s\n",kitapadi);
    	printf("Kitabin Yazari:  %s\n",yazari);
    	printf("Sayfa Sayisi:  %s\n",sayfasayisi);
    	printf("Basim Tarihi:  %s\n",basimtarihi);
    	printf("Basim Evi:  %s\n",basimevi);
    	printf("Kitap Turu:  %s\n",turu);
    	
    return 0;
    	
	}
