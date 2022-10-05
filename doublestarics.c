#include <stdio.h>
int main ()
{
	int i, j, start, end;
	
	printf("Enter The Starting Point : ");
	scanf("%d",&start);
	
	printf("Enter The Ending Point : ");
	scanf("%d",&end);
	
	if (start<end)
	{
		for (i=start; i<=end; i++)
		{
			for (j=1; j<i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		
	}
	
	if (end<start)
	{
			for (i=start; i>=end; i--)
		{
			for (j=1; j<i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
