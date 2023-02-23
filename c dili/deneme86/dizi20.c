#include <stdio.h>

int main() {
	
	//aritmetik dizileri bir arada listelemek
	
	int dizi[100];
	int i,sayi;
	
	printf("Elaman Sayisi: ");
	scanf("%d" , &sayi);
	
	for(i=0  ; i<sayi ; i++)
	{
		printf("Dizinin %d. degerini girin : ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	
	for (i=0 ; i<sayi ; i++)
	{
		printf("%d\n",dizi[i]);
	}
	
	return 0;
}


