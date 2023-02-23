#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int i , n , faktoriyel;
	
	printf("Faktoriyeli Hesaplanacak Sayiyi Giriniz: ");
	scanf("%d",&n);
	
	faktoriyel=1;
	
	for (i=1 ; i<=n ; i++)
	{
		faktoriyel *= i;
		
	}
	
	printf("%d! = %d",n,faktoriyel);
	
	return 0;
}
