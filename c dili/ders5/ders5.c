#include <stdio.h>
#include <stdlib.h>

//Zeliha POLAT
//
//fonksiyonlar 
// void de hicbir sey donmuyor 
/* 
 FONKSIYON TANIMLAMA 
 
 DonusTipi (void,int,double...)    fonksiyonAdi(parametreler) {
 
       /// Fonksiyon Blogu 
	   
	   
	   yapilacak islemler 
	   
	 }
	    */
	    
void  hatayibas(int hata) {
	
	printf("hata kodu %d",hata);
}    
	    
int main() {
	int sayi;
	printf("Negatif olmayan bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi<0){
		
		hatayibas(404); //cagiriyoruz fonksiyonu 
	}
	else {
		printf("tebrikler");
	}
	
	return 0;
}
