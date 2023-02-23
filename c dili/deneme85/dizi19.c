#include <stdio.h>

   int main()  {
   	
//  klavyeden girilen sehirleri her girdiginde direkt listelemek

/*
    char sehir[15];
    int i;
    for(i=0 ; i<3 ; i++)
    {
    	printf("Sehri giriniz: ");
    	scanf("%s",&sehir);
    	printf("Girdiginiz il: %s" , sehir);
    	printf("\n");
	} */
	
	
   
   
   //girilen sehirleri ayni anda listelemek
   
   char sehir[3][15];
   
   int n;
   for(n=0 ; n<3 ; n++)
   {
   	printf("%d.Sehri Giriniz: ",n+1);
   	scanf("%s",&sehir[n]);
   }
   
   printf("\n");
   printf("Girmis Oldugunuz Sehir isimleri:\n");
   
   
   for(n=0 ; n<3 ; n++)
   {
   	printf("%s\n", sehir[n]);
   	
   }
   
   return 0;
}
   
