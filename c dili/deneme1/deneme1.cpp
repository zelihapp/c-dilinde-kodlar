#include <stdio.h>

    int main() {
    	
    	int x = 4;
    	int y = 5;
    	int a = 6;
    	
    	
    	printf("x:%d y:%d a:%d\n",--x,++y,a++);
    	printf("x:%d y:%d a:%d\n",x,y,a);
    	printf("x:%d y:%d a:%d\n",x--,--y,a--);
    	
    	x += a+1;
    	printf("%d\n",x);
    	
    	x = y = a + 4;
    	printf("x:%d y:%d a:%d\n",x,y,a);
    	
    	
    	
    	
    	
    return 0;
    
	}