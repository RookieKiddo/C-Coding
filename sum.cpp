#include<stdio.h>

int main ()
{
	int i,n,sum=0;
	
	printf("Enter The Term : ");
	scanf("%d",&n);
	
	for (i=0; i<=n;i++)
	{
		sum=sum+i;
	}
	
	printf("Sum = %d",sum);
	
	return 0;
}
