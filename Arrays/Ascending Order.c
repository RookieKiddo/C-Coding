#include <stdio.h>

int main ()
{
	int n,i,j;
	
	printf("Enter The Range of Array : ");
	scanf("%d",&n);
	
	int asc[n];
	
	for (i=0; i<n; i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&asc[i]);
	}
	
	printf("The Ascending Order is : ");
	
	for (i=0; i<n; i++)
	{	
		for (j=0; j<n; j++)
		{
			if (asc[j]<asc[i])
			{
			printf("%d ",asc[j]);
			}
		}

	}
}
