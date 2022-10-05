#include<stdio.h>
#include<conio.h>

int main ()
{
	int i,j,gap;
	
	for (i=1; i<=5;i++)
	{
		for (gap=5-i; gap>=0;gap--)
		{
			printf(" ");
		}
		for (j=1;j<=(i*2)-1;j++)
		{
			printf("%c",'A' +j-1);
		}
		printf("\n");
	}
}
