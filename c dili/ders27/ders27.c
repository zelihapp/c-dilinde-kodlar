#include <stdio.h>
#include <stdlib.h>

/* asal carpanlai bulan program  */


int main() {
	int a,b;
	printf("Pozitif tam sayi giriniz: ");
	scanf("%d",&a);
	b=2;
	
	while (a>1)
	{
		if(a%b==0)
		{
			printf("b= %d\n",b);
			a=a/b;
		}
		else
		{
			b=b+1;
		}
	}
	
	return 0;
}
