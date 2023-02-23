#include <stdio.h>
#include <stdlib.h>
#include <math.h>

   int main() {
   	
   	int sayi1,sayi2,sonuc;
   	char islem;
   	
   	printf("1.sayiyi giriniz:  ");
   	scanf("%d",&sayi1);
   	
   	printf("2.sayiyi giriniz:  ");
   	scanf("%d",&sayi2);
   	
   	printf("islemi giriniz:  ");
   	scanf("%s",islem);
   	
   	switch (islem)
   	{
   		case '+':
   			sonuc=sayi1+sayi2;
   			printf("sonuc: %d",sonuc);
   			break;
   			
   		case '-':
   			sonuc=sayi1 - sayi2;
   			printf("sonuc: %d",sonuc);
   			break;
   			
   		case '*':
   			sonuc=sayi1*sayi2;
   			printf("sonuc: %d",sonuc);
   			break;
   			
   		case '/':
   			sonuc=sayi1/sayi2;
   			printf("sonuc: %d",sonuc);
   			break;
   			
   		default :
   			printf("Hatali islem sembolu");
   			break;
   			
	   }
	   
	return 0;
   	
   }
