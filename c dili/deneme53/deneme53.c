#include <stdio.h>

    int main() {
    	
    	int n,i,j,t;
    	t=0;
    	
    	printf("Lutfen n degerini giriniz: ");
    	scanf("%d",&n);
    	
    	for(i=1 ; i<=n ; i++)
    	{
    		for(j=1 ; j<=n ; j++)
    		{
    			t=t+i+j;
			}
		}
		
		printf("%d",t);
		
		return 0;
	}
