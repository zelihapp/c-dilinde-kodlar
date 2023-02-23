#include <stdio.h>
#include <stdlib.h>

//girilen tam sayinin tam bolenlerini bulan program

int main() {
	
	int a,i;
	printf("Bir tam sayi giriniz: ");
	scanf("%d",&a);
	
	for(i=1 ; i<=a ; i++)
	{
		if (a%i==0)
		{
			printf("i= %d\n",i);
		}
	}
	
	return 0;
}
