#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	 char kr;
	 
	  printf("Lutfen Bir Karakter Girin: ");
	  kr = getchar(); // tek bir karakterin okunmasi 
	  
	  switch (kr)
	  {
	  	case 'a' :
	  		printf("a harfine bastiniz.\n");
	  		break;       // break getirilmeseydi her durumu sirasiyla yazdirirdi 
	  		
	  	case 'b' :
	  		printf("b harfine bastiniz.\n");
	  		break;      // derleyici break ile karsilastiginda bulundugu yapinin icinden kosulsuz olarak ayrilir 
	  		            // ve takip eden isleme baslar.
	  		
	  	default :
	  		printf("a veya b harfine basmadiniz.");
	  }
	  
	return 0;
}
