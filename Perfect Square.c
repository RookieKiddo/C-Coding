#include<stdio.h>
int main ()
{	
	int num,a,sum=0;
	
	printf("Enter The Number : ");
	scanf("%d",&num);
	
	for (a=1; a<=num/2; a++)
	{
		if (num%a==0)
		{
			sum=sum+a;
		}
	}
	
	if (sum==num)
	{
		printf("%d",sum);
	}
	
	else
	{
		printf("%d",sum);
	}
	
	return 0;
}
