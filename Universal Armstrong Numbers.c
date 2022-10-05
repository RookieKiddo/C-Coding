#include <stdio.h>
#include <math.h>
int main ()
{
	int n=0;
	int orig=0;
	int d=0;
	int sum=0;
	int r=0;

	printf("Enter The Number : ");
	scanf("%d",&n);
	
	orig=n;

	for (; n>0;d++)
	{
	r=n%10;
	n=n/10;
	}

	n=orig;
	
	for (; n>0;)
	{
	r=n%10;
	sum=sum+pow(r, d);
	n=n/10;
	}

	if(sum==orig)
	{
	printf("%d is an Armstrong Number",orig);
	}
	
	else
	{
	printf("%d is not an Armstrong Number",orig);
	}
	
	return 0;
}
