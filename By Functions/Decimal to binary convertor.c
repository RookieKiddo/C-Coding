#include <stdio.h>

void binary (int dec)
{
	int bin[32];
	int j,i;
	
	for (i=0; dec>0; i++)
	{
		bin[i]=dec%2;
		dec=dec/2;
	}
	
	for (j=i-1; j>=0;j--)
	{
		printf("%d",j);
	}	
	
}

int main ()
{
	int dec,rev,bin=0;
	
	printf("Enter Any Decimal Number : ");
	scanf("%d",&dec);
	
	binary(dec);
	
	return 0;
		
}
