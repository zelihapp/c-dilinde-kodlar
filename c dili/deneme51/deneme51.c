#include <stdio.h>

    int main()  {
    	
    	int t1,t2;
    	int i,j;
    	t1=-1;
    	t2=1;
    	
    	for(i=-5;i<=5;i=i+6)
    	{
    		t1=t1+(2*i);
    		
    		for(j=5; j>=1 ; j=j-3)
    		{
    			t1 = t1 - (2*j);
    			t2 = t2 - i;
    			
			}
			
		t2 = t2 + i;
		
		}
		
		printf("%d  %d",t1,t2);
		
		return 0;
	}
