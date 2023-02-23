#include <stdio.h>

   int main()  {
   	
   	/*float sayi1,sayi2,toplam;
   	
   	printf("1.Sayiyi Girin:  ");
   	scanf("%f",&sayi1);
   	
   	printf("2.Sayiyi Girin:  ");
   	scanf("%f",&sayi2);
   	
   	toplam= sayi1+sayi2;
   	
   	printf("Toplam:  %f",toplam);  */
   	
   	//Aylik maas maasina yuzde 12 zam yapilirsa yeni maasi ne kadar olur
   	
   	printf("****ZAM MAAS HESABI****");
   	printf("\n\n");
   	
   	float maas,yenimaas;
   	
   	printf("Maasinizi giriniz:  ");
   	scanf("%f",&maas);
   	
   	yenimaas=maas+(maas*0.12);
   	
   	printf("Yeni maasiniz:  %f",yenimaas); 
   	
   	
   	return 0;
   	
   }
