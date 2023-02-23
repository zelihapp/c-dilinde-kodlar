#include <stdio.h>
#include <stdlib.h>

/* kombinasyon */

int main() {
	
	int i,n,r;
	float k,f1=1 , f2=1 , f3=1;
	
	printf("n= ");
	scanf("%d",&n);
	printf("r= ");
	scanf("%d",&r);
	
	for(i=1 ; i<=n ; i++)
	{
		f1 = f1 * i;
		if (i<=r)
		{
			f2 = f2 * i;
		}
		if (i<=n-r)
		{
			f3 = f3 * i;
		}
	}
	
	k = f1 / (f2*f3);
	printf("Sonuc: %.2f",k);
	
	return 0;
}


