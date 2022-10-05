#include <stdio.h>

int natural (int num);
int square (int sq);
int cube (int num);
int quad (int num);
int pent (int num);
int hex (int num);
int hept (int num);
int oct (int num);
int non (int num);
int dec (int num);


int main ()
{
	int num, numbers;
	
	for (num=1; num<=10; num ++)
	{
		numbers = natural(num);
		printf("%d ",numbers);
		
		printf("\n");
		
		numbers = square (num);
		printf("%d ",numbers);
	}
	return 0;
}

int natural (int num)
{
	return (num++);
}

int square (int sq)
{
	return (sq*sq);
}
