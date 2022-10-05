#include <stdio.h>

int add (int num1, int num2)
{
	int temp,i=0;
	
	temp=num1;
	
	for (i=1; i<num2; i++)
	{
		num1=num1*temp;
	}
	
	return (num1);
}

int main ()
{
	int i,j,sum;
	
	printf("Enter The Number : ");
	scanf("%d",&i);
	
	printf("Enter The Power : ");
	scanf("%d",&j);
	
	sum=add (i,j);
	
	printf("%d ",sum);
	
	
	
	return 0;
}
