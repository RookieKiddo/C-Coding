#include <stdio.h>
int main ()
{
	int i,j,gap,value,num,nume,denome;
	
	for (i=0; i<=4; i++)
	{
		for (gap=4-i; gap>=1; gap--)
		{
			printf(" ");
		}
		
		int num=1;
		int nume=i;
		int denome=1;
		
		for (value=0; value<=i; value++)
		{
			printf("%d ",num);
			num=num*nume;
			num=num/denome;
			nume--;
			denome++;	
		}	
		
	printf("\n");
	}
	
	return 0;
}
