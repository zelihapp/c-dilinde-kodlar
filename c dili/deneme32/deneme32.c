#include <stdio.h>

    int main(){
    	
    	printf("***Ogrenci Ortalama Bilgi Sistemi***");
    	printf("\n\n");
    	
    	int sinav1,sinav2,ortalama;
    	
    	printf("1.Sinav Notunu Giriniz:  ");
    	scanf("%d",&sinav1);
    	
    	printf("2.Sinav Notunu Giriniz:  ");
    	scanf("%d",&sinav2);
    	
    	ortalama=(sinav1+sinav2)/2;
    	
    	printf("Ortalamaniz:  %d\n",ortalama);
    	
    	if(ortalama>=50)
    	{
    		printf("Tebrikler Dersten Gectiniz :)");
		}
		else
		{
			printf("Maalesef Dersten Kaldiniz :(");
		}
		return 0;
	}
