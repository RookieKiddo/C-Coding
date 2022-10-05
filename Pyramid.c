#include <stdio.h>
int main ()
{
	int i=0;
	int j=0;
	int gap=0;
	int start=0;
	int end=0;

	printf("Enter The Starting Point : ");
 	scanf("%d",&start);
 	
	printf("Enter The Ending Point : ");
	scanf("%d",&end);
	
	for (i=start; i<=end; i++)
	{
		for (gap=end-i; gap>=1;gap--)
		{
			printf(" ");
		}
				
		for (j=1; j<=i; j++)
		{	
			printf("* ");
		}
	printf("\n");
	}
		
	return 0;
}
