#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	int i,n;
	float t1=0,t2=0,t3=0;
	
	printf("Pozitif tam sayi giriniz: ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		t1 = t1 + i;
	}
	for(i=1 ; i<=n ; i+=2)
	{
		t2 = t2 + i;
	}
	for(i=2 ; i<=n ; i+=2)
	{
		t3 = t3 + i;
	}
	
	printf("1den %d ye kadar olan sayilarin toplami: %f\n",n,t1);
	printf("1den %d ye kadar olan tek sayilarin toplami: %f\n",n,t2);
	printf("2den %d ye kadar olan cift sayilarin toplami: %f\n",n,t3);
	
	return 0;
}
