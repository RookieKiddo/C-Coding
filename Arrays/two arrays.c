#include <stdio.h>

int main ()
{
	int n,i;
	
	printf("Enter The Range of Array : ");
	scanf("%d",&n);
	
	int frst[n], scnd[n];
	
	for (i=0; i<n; i++)
	{
		printf("Element - %d : ",i);
		scanf("%d",&frst[i]);
		scnd[i]=frst[i];
	}
	
	printf("Elements of First Array are : ");
	
	for (i=0; i<n; i++)
	{
		printf("%d ",frst[i]);
	}
	
	printf("\n");
	
	printf("Elements of Second Array are : ");
	
	for (i=0; i<n; i++)
	{
		printf("%d ",scnd[i]);
	}
	
	return 0;
}
