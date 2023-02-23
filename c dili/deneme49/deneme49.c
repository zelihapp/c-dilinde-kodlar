#include <stdio.h>
 
    int main()  {
    	
    	int n,i,a,b,c;
    	printf("Kac terim yazilsin:  ");
    	scanf("%d",&n);
    	
    	i=1;
    	a=0;
    	b=1;
    	
    	while(i<=10) 
    	{
    		printf("%d\n",a);
    		c=a+b;
    		a=b;
    		b=c;
    		i++;
    		
		}
		
	return 0;
	
	}
