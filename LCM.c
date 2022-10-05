#include<stdio.h>

int LCM (int num1, int num2);

int main()
{
	int num1, num2,l;
	
	printf("Enter The First Number : ");
	scanf("%d",&num1);
	
	printf("Enter The Second Number : ");
	scanf("%d",&num2);
	
	l=LCM (num1, num2);
	
	printf("The LCM of %d and %d is %d",num1,num2,l);
	
	return 0;
}

int LCM (int num1, int num2)
{
	int i=2, j=0,k=0,n=1;
	
	while (num1 > 1 && num2 > 1)
	{	
		while (num1%i==0 && num2%i==0)
		{
			if (num1%i==0 && num1>=1)
			{
				num1=num1/i;
				j=i;
			}
		
			if (num2%i==0 && num1 >=1)
			{
				num2=num2/i;
				k=i;
			}
		}
		
		n=n*j*k;
		i++;
	}
	
	return n;
}
