#include <stdio.h>
int main ()
{
	int a,i,start,end,sum=0;
	
	//printf("Enter The Starting Point : ");
//	scanf("%d",&start);
	
	//printf("Enter The Ending Point : ");
//	scanf("%d",&end);
	
	for (a=1,i=50; a<=50/2; i++,a++)
	{
		if (a%i==0)
		{
			sum=sum+a;
		}
		
		else if (sum==i)
		{
			printf("%d ",sum);
		}
	}
	
}
