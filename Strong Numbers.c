#include<stdio.h>
int main ()
{
	int i,start,end,num,rem,sum,fact=0;
	
	printf("Enter Starting Point : ");
	scanf("%d",&start);
	
	printf("Enter Ending Point : ");
	scanf("%d",&end);
	
	for (num=start; num<=end; num++)
	{
		int temp=num;
	
	sum=0;
	
	while (temp>0)
	{
		rem=temp%10;
		
		fact=1;		
		
		for (i=rem; i>=1; i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		
		temp=temp/10;
	}
	
	if (sum==num)
	{
		printf("%d ",sum);
	}
	
	}
	
	return 0;
}
