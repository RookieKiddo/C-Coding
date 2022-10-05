#include <stdio.h>

int GCD (int num1, int num2);

int main ()
{
	int num1,num2,g;
	
	printf("Enter The First Number : ");
	scanf("%d",&num1);
	
	printf("Enter The Second Number : ");
	scanf("%d",&num2);
	
	g=GCD (num1, num2);
	
	printf("The GCD of %d & %d is %d",num1,num2,g);
	
	return 0;
}

int GCD (int num1, int num2)
{

	if (num2==0)
	{
		return num1;
	}
		
	else
	{
		return GCD (num2, num1%num2);
	}
	
}

