#include <stdio.h>

// 1 ile 20 arasindaki cift sayilari listeleyen ama 14 listelemeyen prog. c kodlari


    int main() {
    	
    
    	int i=0;
    	while(i<=20)
    	{
    		if(i%2==0 && i!=14)
    		{
    			printf("%d\n",i);
			}
			i++;
		}
		
		return 0;
    	
    	
	}
