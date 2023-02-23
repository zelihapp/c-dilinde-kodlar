#include <stdio.h>


    int main()  {
    	
    
    	int i,j,T1,T2;
    	
    	T1=1;
    	T2=2;
    	
    	for(i=1 ; i<=5 ; i=i+3)
    	   {
    	   	
    	   	for (j=3 ; j>=-1 ; j=j-3)
    	   	{
    	   		
    	   		T1=T1+i+j;
    	   		
			}
			  
		      T2 = T2 + T1 + i + j;
		      
		   }
		   
		   printf("%d    %d", T1 , T2);
		   return 0;
	}
