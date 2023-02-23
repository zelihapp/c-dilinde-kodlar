#include <stdio.h>
#include <stdlib.h>

/* n >= 0 oldugu surece n! degerini hesaplar n<0 oldugunda donguden cikar */


int main() {
	
	int i , n , faktoriyel ;
	
	while (1) // sonsuz dongu 
	
	printf("Faktoriyeli hesaplanacak sayiyi giriniz:  ");
	scanf("%d",&n);
	
	if (n<0)  
	{
		break;
	}  
	
	for (faktoriyel = 1 , i=1 ; i<=n ; i++)
	{
		faktoriyel *= i ;
	}
	
	printf("%d! = %d",n,faktoriyel);
	
	return 0;
}
