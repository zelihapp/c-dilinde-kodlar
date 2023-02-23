#include <stdio.h>

    int main() {
    	int i,sayi,sayilar,toplam,ortalama;
    	
    	toplam=0;
    	
    	printf("Sayi giriniz:  ");
    	scanf("%d",&sayi);
    	
    	for(i=0 ; i<=sayi ; i++)
    	{
    		printf("Bir sayi giriniz: ");
    		scanf("%d",&sayilar);
    		toplam=toplam + sayilar;
    		ortalama=toplam/sayi;
    		
		}
		
		printf("Girdiginiz sayilarin toplami:  %d\n",toplam);
		printf("Girdiginiz sayilarin aritmetik ortalamasi:  %d",ortalama);
		
		return 0;
	}
