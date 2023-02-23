#include <stdio.h>
#include <stdlib.h>

/* iki sayiyi fonksiyon ile toplayip ekrana yazdiran program */


int topla(int ,int) ;   //fonksiyon prototipi

int main() {

   int toplam , a , b;
   
   printf("Iki sayi giriniz: ");
   scanf("%d %d",&a,&b);
   
   /*fonksiyon cagrilip a ve b degerleri parametre olarak aktariliyor 
    topla(a,b)=a+b degeri toplam degiskenine atanmasi */
    
    toplam = topla(a,b);
    
    printf("%d ve %d nin toplami %d dir.",a,b,toplam);
    
	return 0;
}

/* *** Fonksiyon Tanimlanmasi *** */

/*  Bu fonksiyon iki tamsayiyi toplar */

int topla(int x,int y) {
	int sonuc;
	sonuc=x+y;
	return sonuc;
}

// return sonucu main bloguna dondurur.

/*Programda, klavyeden okunan a ve b degiskenleri fonksiyonuna parametre olarak aktarilmistir. Bu 
degiskenlerin isimleri ile topla fonksiyonunda kullanilan degiskenlerin (x ve y) isimleri ayni 
olmasi zorunlu degildir. Burara a ve b degiskenleri sirasiyla x ve y degiskenleri yerine konmustur. 
16.satirda toplam adli tamsayi degiskenine topla fonksiyonunun dönüs degeri (a + b degeri) 
atanmistir.*/

