#include <stdio.h>

  //alacagi n degerine gore kendisine kadar olan sayilarin karelerinin toplami
  

   int main()  {
   	
   	int i,toplam,n;
   	i=0;
   	toplam=0;
   	
   	printf("Lutfen n degerini giriniz:  ");
   	scanf("%d",&n);
   	
   	while ( i<=n)
   	{
   		toplam=toplam+(i*i);
   		i++;
	   }
	   
	   printf("sonuc:  %d",toplam);
	   return 0;
   }
