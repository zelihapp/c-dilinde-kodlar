#include <stdio.h>

    int main() {
    	
    	// 1 ile 50 arasinda 5´e tam bolunen sayilari listeleyen program 
    	
    	/*int i;
    	for(i=1;i<=50;i++)
    	{
    		if(i%5==0)
    		{
    			printf("%d\n",i);
			}
		}  */
		
		
		
		// 3 basamakli sayiyi basamaklarina ayiran program
		
		int sayi;
		
		printf("Klavyeden bir sayi giriniz:  ");
		scanf("%d",&sayi);
		
		int birler,onlar,yuzler;
		
		
		yuzler=sayi/100;
		printf("%d\n",yuzler);
		
		onlar=sayi/10;
		onlar=onlar%10;
		printf("%d\n",onlar);
		
		birler=sayi%10;
		printf("%d\n",birler);
		
		
		
		
		return 0;
	}
