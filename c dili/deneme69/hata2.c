#include <stdio.h>

    int main()  {
    	
    	int sayi1,sayi2,sonuc;
    	char islem;
    	
    	sayi1=34;
    	sayi2=10;
    	
    	printf("islem sembolunu giriniz:  ");
    	scanf("%s",islem);
    	
    	switch (islem)
    	{
		
    	
    	case '+':
    		sonuc=sayi1+sayi2;
    		printf("sonuc: %d",sonuc);
    		break;
    		
    	case '-':
    		sonuc=sayi1-sayi2;
    		printf("sonuc: %d",sonuc);
    		break;
    		
    	default :
    		printf("Hatali islem sembolu girdiniz");
    		break;
    }
    
    return 0;
    		
	}
