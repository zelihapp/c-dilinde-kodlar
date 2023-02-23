#include <stdio.h>
 // 6.12.22 algoritma dersi fonksiyonlar 
  void main() {
  	 
  /*	int a,b, toplams=0;
  	
  	printf("1.sayiyi giriniz:");
  	scanf_s("%d",&a);
  	
  	printf("2.sayiyi giriniz:");
  	scanf_s("%d",&b);
  	
  	printf("Toplam Sonucu:  %d",(a+b));
  	getchar();   */
  	
  	
  	printf("Fonksiyon Cagiriliyor\n");
  	topla();
  	printf("fonksiyon islemi bitti\n");
  	getchar();
  	 	
  }
  
  int topla() {
  	int a,b, toplams = 0;
  	
  	printf("1.sayiyi giriniz: ");
  	scanf_s("%d",&a);
  	
  	printf("2.sayiyi giriniz:  ");
  	scanf_s("%d",&b);
  	
  	printf("Toplam Sonucu : %d\n",(a+b));
  	
  	return 0;
  }
