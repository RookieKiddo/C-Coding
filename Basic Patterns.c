#include <stdio.h>
int main ()
{
	int i,j,start,end,menu,gap;
	char enter=' ';
	
	for (;;)
	{
		
		if (enter=='N' || enter=='n')
		break;
		
		printf("Please Select The Pattern Below :-\n1.Right Angle Trianlge\n2.Pyramids.\n3.Square\n");
		scanf("%d",&menu);
		
		switch (menu)
		{
			case 1 :	printf("Enter The Starting Point : ");
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
						break;
			
			case 2 :	printf("Enter The Starting Point : ");
					 	scanf("%d",&start);
					 	
					 	printf("Enter The Ending Point : ");
						scanf("%d",&end);
						
						if (start<end)
						{
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
						}
						
						if (start>end)
						{
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
						}
						break;
						
			case 3 :	printf("Enter The Starting Point : ");
					 	scanf("%d",&start);
					 	
					 	printf("Enter The Ending Point : ");
						scanf("%d",&end);
					
						for (i=1; i<=end;i++)
						{
							for (j=1; j<=end;j++)
							{
								printf("*");
							}
						printf("\n");
						}
						break;
			
			default : 	printf("Invalid Number");
					  	break;		
		}
		
		printf("Press Y to Enter More\n\tOR\nPress N to Exit\n");
		scanf(" %c",&enter);
		
	}
	
	return 0;
}
