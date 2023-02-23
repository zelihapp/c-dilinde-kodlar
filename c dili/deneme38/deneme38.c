#include <stdio.h>

   int main() {
   	
   /*	int sayac=0;
   	int i;
   	for(i=1;i<=10;i++)
   	{
   		sayac=sayac+i;
	}
	
	printf("Sayac - %d",sayac);   */
	
	
    /*	int i;
	int faktoriyel=1;
	for(i=1;i<=6;i++) 
	{
		faktoriyel=faktoriyel*i;
	}
	
	   printf("6 Sayisinin Faktoriyel Degeri:   %d",faktoriyel);  */
	   
	   
	   // klavyeden girilen sayinin faktoriyeli
	   
	   int i,sayi;
	   int faktoriyel=1;
	   
	   printf("Faktoriyeli Alinacak Sayi:  ");
	   scanf("%d",&sayi);
	   
	   for(i=1;i<=sayi;i++)
	   {
	   	    faktoriyel=faktoriyel*i;
	   }
	   
	        printf("Sonucunuz:  %d",faktoriyel);
	        
	
	return 0;
	
   }
