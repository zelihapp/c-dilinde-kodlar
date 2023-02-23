#include <stdio.h>
#include <stdlib.h>

/* kombinasyon ama full kendim deneyecem */
//Zeliha POLAT


int main() {
	int n,r,i,k;
	int f1=1,f2=1,f3=1;
	printf("n giriniz: ");
	scanf("%d",&n);
	printf("r giriniz: ");
	scanf("%d",&r);
	
	for(i=1 ; i<=n ; i++)
	{
		f1=f1*i;
		if (i<=r)
		{
			f2=f2*i;
		}
		if(i<=n-r)
		{
			f3=f3*i;
		}
	}
	k=f1/(f2*f3);
	
	printf("Kombinasyon(%d,%d)=%d",n,r,k);
	
	
	return 0;
}
