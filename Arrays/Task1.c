#include <stdio.h>

int main ()
{	
	int n=0,i=0;
	
	printf("Enter The Range of Arrays : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&arr[i]);
	}
	
	for (i=n-1; i>=0; i--)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
