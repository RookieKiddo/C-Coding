#include <stdio.h>
int main ()
{
	int i,j,sum,num;
	
	printf("Enter The Number of Terms : ");
	scanf("%d",&num);
	
	for (i=1,j=1,sum=0; i<=num; i++)
	{
		printf("%d",j);
		
		if(i<num)
		{
			printf("+");
		}
		
		
		sum=sum+j;
		
		j=(j*10)+1;
	}
	
	printf("\nThe Sum to %d terms is : %d",num,sum);
	
	return 0;
}
