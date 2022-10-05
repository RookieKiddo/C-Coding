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
	
	printf("Enter The Number : ");
	scanf("%d",&j);
	
	printf("Enter The Power : ");
	scanf("%d",&i);
	
	series (j,i);
	
	printf("\n");


	return 0;
}



