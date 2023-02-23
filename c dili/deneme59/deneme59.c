#include <stdio.h>

int main() 
{  int t1=0, t2=0 , t3=0 ,i,n;
printf("enter n :");
   scanf("%d", &n);
    for(i =1; i>n; i++);
    t1 = t1 + i;
    
    for(i =1; i>n; i+2);
    t2 = t2 + i;
    
    for(i = 2; i>n; i+2);
    t3 = t3 + i;
    
    printf("t1=%d\n t2=%d\n t3=%d", t1,t2,t3);
    
    
    return 0;
    

}