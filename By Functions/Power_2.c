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
	int i,j,start,end;
	
	printf("Enter The Power of the Series You Want: ");
	scanf("%d",&i);
	
	printf("Enter The Starting Point : ");
	scanf("%d",&start);
	
	printf("Enter The Ending Point : ");
	scanf("%d",&end);
	
	printf("Series of Power %d \n",i);

		for (j=start; j<=end; j++)
		{
			series (j,i);
		}
		printf("\n");


	return 0;
}



