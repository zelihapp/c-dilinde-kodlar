#include <stdio.h>

    int main() {
    	
    	//iki sayiinin toplami 50 den buyukse 50 den buyuktur yazan program
    	
    	int sayi1,sayi2,toplam;
    	
    	printf("1.Sayiyi Giriniz:  ");
    	scanf("%d",&sayi1);
    	
    	printf("2.Sayiyi Giriniz:  ");
    	scanf("%d",&sayi2);
    	
    	toplam=sayi1+sayi2;
    	
    	printf("Toplam:  %d\n",toplam);
    	
    	if(toplam>50)
    	{
    		printf("Toplam 50den Buyuktur");
		}
		else
		{
			printf("Toplam 50den Kucuktur");
		}
		return 0;
    	
	}
