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
	
	for (i=start; i>=end; i--)
	{				
		for (j=1; j<=i; j++)
		{	
			printf("* ");
		}
		
	printf("\n");
	
	for (gap=start-i; gap>=end;gap--)
		{
			printf(" ");
		}
	}
		
	return 0;
}
