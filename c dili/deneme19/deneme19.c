#include <stdio.h>

   int main() {
   	
   	char ad[10] , Soyad[10] , yas[2] , sehir[13] , meslek[10];
   	
   	/*hafizada 45 karakterlik yer ayirdi veri girisi hala yapilmadi*/
   	
   	printf("Adiniz: ");
   	scanf("%s",ad);
   	
   	printf("Soyadiniz: ");
   	scanf("%s" ,Soyad);
   	
   	printf("Yasiniz:  ");
   	scanf("%s" ,yas);
   	
   	printf("Yasadiginiz sehir: ");
   	scanf("%s" ,sehir);
   	
   	printf("Mesleginiz:  ");
   	scanf("%s" ,meslek);
   	
   	printf("\n");
   	
   	printf("Adi: %s - Soyadi: %s\n" ,ad,Soyad);
   	printf("Sehriniz: %s - Mesleginiz:  %s\n",sehir,meslek);
   	printf("yasiniz: %s",yas);
   	
   	return 0;
   }
   
   
