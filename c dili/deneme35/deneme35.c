#include <stdio.h>


    int main() {
    	
    	int sinav1,sinav2,sinav3,proje,ortalama;
    	
    	printf("1.Sinav Notunu Giriniz:  ");
    	scanf("%d",&sinav1);
    	
    	printf("2.Sinav Notunu Giriniz:  ");
    	scanf("%d",&sinav2);
    	
    	printf("3.Sinav Notunu Giriniz:  ");
    	scanf("%d",&sinav3);
    	
    	printf("Proje Notunu Giriniz:  ");
    	scanf("%d",&proje);
    	
    	ortalama=(sinav1+sinav2+sinav3+proje)/4;
    	
    	printf("Ortalama:  %d\n",ortalama);
    	
    	if(ortalama<50)
    	{
    		printf("Harf notunuz FF");
		}
		if(ortalama>50 && ortalama<60)
		{
			printf("Harf notunuz DD");
		}
		if(ortalama>60 && ortalama<70)
		{
			printf("Harf notunuz CC");
		}
		if(ortalama>70 && ortalama<85)
		{
			printf("Harf notunuz BB");
		}
		if(ortalama>85)
		{
			printf("Harf notunuz AA");
		}
		
	return 0;
    	
    	
	}
