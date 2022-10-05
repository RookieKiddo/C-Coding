#include <stdio.h>

int series (int num, int pow)
{
	int i,numb;
	numb=num;
	for (i=1; i<pow; i++)
	{
		num=num*numb;
	}
	printf("%d ",num);
}

int main ()
{
	int i,j;
	for (i=1; i<=10; i++)
	{
		printf("Series of Power %d \n",i);

		for (j=1; j<=10; j++)
		{
			series (j,i);
		}
		printf("\n");
	}

	return 0;
}



