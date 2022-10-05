#include <stdio.h>

int main ()
{
	int n,i,j;
	
	printf("Enter The Range of Array : ");
	scanf("%d",&n);
	
	int num[n];
	
	for (i=0; i<n; i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&num[i]);
	}
	
	for (i=0; i<n; i++)
	{	
		for (j=0; j<i; j++)
		{
			if (num[i]==num[j])
			{
			printf("The Duplicated Number is : %d\n",num[j]);
			}
		}

	}
	
	return 0;
	
}
