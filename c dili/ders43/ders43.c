#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void fibonacci(int N)
{
	int i,t1,t2,t3;
	t1=1;
	t2=1;
	printf("%d\t %d\t",t1,t2);
	for(i=1 ; i<=N-2 ; i++)
	{
		t3=t1+t2;
		printf("%d\t",t3);
		t1=t2;
		t2=t3;
	}
	
}

int main() {
	int N;
	printf("kac terim yazilsin: ");
	scanf("%d",&N);
	fibonacci(N);
	return 0;
}
