#include <stdio.h>

int series (int num)
{
	int temp,fact,sum,i=0;
	
	num=temp;
	
	for (i=1,fact=1; i>1;i--);
	{
		fact=fact*num;
	}
	sum=sum+fact;
	
	sum=sum/temp;
	
	return (sum);
}

int main ()
{
	int i,sum;
	
	for (i=1; i<=5; i++)
	{
		series(i);
	}
	
	sum=series(sum);
	
	printf("%d",sum);
	
	return 0;	
}
