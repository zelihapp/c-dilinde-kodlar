#include <stdio.h>

    int main()  {
    	
    	int n,i,a,b,c;
    	printf("Kac terim istiyorsunuz:  ");
    	scanf("%d",&n);
    	a=0;
    	b=1;
    	
    	for(i=1;i<=n;i++)
    	{
    		printf("%d\n",a);
    		c=a+b;
    		a=b;
    		b=c;
    		
		}
		
	return 0;
	
	}
