#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Zeliha POLAT
// 
// yildizlar ile sekil olusturma 

int main() {

    int i,j,en,boy;

    printf("En degeri: ");
    scanf("%d",&en);

    printf("Boy degeri: ");
    scanf("%d",&boy);

    for(i=1 ; i<=boy ; i++)
    {
    	for(j=1 ; j<=en ; j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	return 0;
}
