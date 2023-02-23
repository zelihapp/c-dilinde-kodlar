#include <stdio.h>
#include <stdlib.h>

//Zeliha POLAT
//
//fonksiyonlarda return deyimi 


/*  void hic bir deger dondermez yani kod satirlarinin en sonunda return kullanmayiz
    void icinde kullanim dis dunyaya donmez (main blogu) 
	int icinde ise doner return(fonsiyon icindeki islem)
	eger int topla yerini void topla olursa return olmaz ve kullanamazdik cunku..
	..void fonksiyonunun degerini baska bir fonksiyona esitleyemeyiz .esitlemek icin fonksiyonun void olmamasi lazim 
	esitlemek icin return lazim 
	esitlemekten kasit => toplam=topla(sayi1,sayi2)*/
	
	int topla(int sayi1,int sayi2){
	
	return (sayi1+sayi2) ;
	
	}
	
int main() {
	
	int sayi1,sayi2,toplam;
	
	scanf("%d  %d",&sayi1,&sayi2);
	toplam=topla(sayi1,sayi2);
	printf("%d",toplam);
	
	return 0;
}
