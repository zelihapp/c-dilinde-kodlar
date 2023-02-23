#include <stdio.h>

    int main() {
    	
    int t1,t2,i,j;
    t1=1;
    t2=2;
    
    
    
    for(i=1 ; i<=4 ; i=i+2)
    {
    	t1=i;
    	
    	for (j=1 ; j<=5 ; j=j+1)
    	{
    		if ((j%2) != 0) {
    			t1=t1+2*j;
    			
			}
			else {
				t2=t2+i+j;
			}
				t2=t1+t2-i;	
		}
		
	
	}
	    t1=2*t1;
	    printf("%d\n",t1);
	    printf("%d",t2);
	    
	    return 0;
    
	}
