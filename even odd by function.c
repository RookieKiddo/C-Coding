#include<stdio.h>

void check (int num)
{
	if (num%2==0)
	{
		printf("The Number is Even");
	}
	else 
	{
		printf("The Number is Odd");
	}
}

int main ()
{
	int i;
	
	printf("Enter The Number : ");
	scanf("%d",&i);
	
	check(i);
	
	return 0;
	
}
