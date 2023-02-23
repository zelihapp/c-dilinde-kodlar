#include <stdio.h>

    int main() {
    	int i,sayi,toplam;
    	
    	printf("Sayi giriniz:  ");
    	scanf("%d",&sayi);
    	
    	i=0;
    	toplam=0;
    	
    	do 
		{
    		
    		toplam=toplam+(i*i);
    		i++;
    		
		}
		 while (i<=sayi);
		
		printf("%d",toplam);
		return 0;
	}
