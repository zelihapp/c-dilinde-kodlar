#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void asal_mi()
{
	int sayi,i;
    for(i=2 ; i<=sayi/2 ; i++)
    {
    	if (sayi % i == 0)
    	{
    		printf("Sayi asal degildir");
    		break;
		}
		else 
		{
			printf("sayi asaldir");
			break;
		}
	}
}
int main() 
{
	
	int n;
	printf("Pozitif tam sayi giriniz: ");
	scanf("%d",&n);
	asal_mi(); 
	return 0;
}
