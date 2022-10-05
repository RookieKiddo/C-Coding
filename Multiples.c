#include <stdio.h>
#include <math.h>

int main ()
{
	int i,sum,d,j;
	printf("The Natural Numbers are : ");
	for (i=1; i<=10; i++)
	{	
		for (j=1; j<=10 ;j++)
		{	
			long sum= pow(j , i);
			printf("%ld ",sum);
		}
		printf("\n");
	}
	return 0;
}
