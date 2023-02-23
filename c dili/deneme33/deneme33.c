#include <stdio.h>
 
    int main() {
    	
   // Klavyeden girilen sayi 5 e tam bolunuyorsa ....kontrolunu gerceklestir
   
      /*int x;
      
      printf("Sayiyi Giriniz:");
      scanf("%d",&x);
      
      if(x%5==0)
      {
      	printf("Sayi 5 e tam bolunur");
	  }
	  else
	  {
	  	printf("Sayi 5 e tam bolunmez");
	  }   */
	  
	  
	  // Klavyeden girilen sayi 3e ve 5e tam bolunuyormu..
	  
	  int sayi;
	  
	  printf("Sayiyi giriniz:  ");
	  scanf("%d",&sayi);
	  
	  if(sayi%3==0 && sayi%5==0 &&sayi%7==0)
	  {
	  	printf("sayi 3 ve 5e ve 7ye tam bolunur");
	  }
	  else
	  {
	  	printf("sayi 3 ve 5e ve 7ye tam bolunmez");
	  }
	  
	return 0;
	}
