#include <stdio.h>

int LCM (int,int);

int main ()
{
	int num1,num2,l;
	
	printf("Enter The First Number : ");
	scanf("%d",&num1);
	
	printf("Enter The Second Number : ");
	scanf("%d",&num2);
	
	l=LCM (num1, num2);
	
	printf("The LCM of %d & %d is %d",num1,num2,l);
	
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

int LCM (int num1, int num2)
{
	 return (num1*num2) / GCD (num1,num2);
	
}
