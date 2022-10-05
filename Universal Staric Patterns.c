#include <stdio.h>
int main ()
{
	int i=0;
	int j=0;
	int start=0;
	int end=0;
	char enter=' ';
	
	for ( ; ;  )
	{
		
		if (enter=='N'||enter=='n')
		break;
		
		printf("Enter The Starting Point : ");
		scanf("%d",&start);
	
		printf("Enter The Ending Point : ");
		scanf("%d",&end);
	
		if (start<end)
		{
			for (i=start; i<=end; i++)
			{
				for (j=1; j<=i; j++)
				{	
					printf("*");
				}
			printf("\n");
			}
		}
	
		if (start>end)
		{
			for (i=start; i>=end; i--)
			{
				for (j=1; j<=i; j++)
				{
					printf("*");
				}
			printf("\n");
			}
		}
	
		if (start==end)
		{
			for (i=1; i<=end;i++)
			{
				for (j=1; j<=end;j++)
				{
					printf("*");
				}
		printf("\n");
			}
		}
		
		printf("Press Y to Enter More\n\tOR\nPress N to Exit\n");
		scanf(" %c",&enter);
	}
	
	return 0;
}
