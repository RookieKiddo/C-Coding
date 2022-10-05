#include <stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("Enter The Range of Arrays : ");
	scanf("%d",&n);
	
	int num[n];
	
	for (i=0; i<n; i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&num[i]);
	}
	
	for (i=0; i<n; i++)
	{
		sum+=num[i];	
	}
	
	printf("The Sum of %d numbers is %d",n,sum);
	
	return 0;
}
