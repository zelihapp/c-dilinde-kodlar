#include <stdio.h>

    int main() {
    	
    	//Klavyeden girilen dereceye gore suyun durumunu yazdiran programi kodlayin
    	
    	printf("***Suyun Durumu***\n");
    	
    	int derece;
    	
    	printf("Sicaklik Degerini Girin:  ");
    	scanf("%d",&derece);
    	
    	if(derece<=0)
    	{
    		printf("Su BUZ Durumunda");
		}
		if(derece>0 && derece<100)
		{
			printf("Su SIVI Durumunda");
		}
		if (derece>=100)
		{
			printf("Su BUHAR durumunda");
		}
		
		
	return 0;
	
	}
