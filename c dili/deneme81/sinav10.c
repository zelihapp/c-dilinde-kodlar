#include <stdio.h>

   int main()  {
   	
   	int sayi,tersi;
   	
   	printf("sayi giriniz: ");
   	scanf("%d",&sayi);
   	
   	while(sayi>0)
   	{
   		tersi=sayi%10;
   		printf("%d",tersi);
   		sayi=sayi/10;
   		
	   }
	   
	   return 0;		
}
