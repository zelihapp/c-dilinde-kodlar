#include <stdio.h>
#include <stdlib.h>

/* girilen sayiyi tersten yazdiran program */

int main() {
	int a,k;
	printf("3 basamakli bir sayi giriniz: ");
	scanf("%d",&a);
	
	k=a;
	
	while (k != 0)
	{
		k = k % 10;
		k = a/10;
	}
	printf("tersten: %d",k);
	return 0;
}
