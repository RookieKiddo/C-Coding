#include <stdio.h>

int square (int num);

int main ()
{
	int num, sq;
	
	printf("Enter Any Number : ");
	scanf("%d",&num);
	
	sq= square(num);
	
	printf("The Square is %d",sq);
	
	return 0;
}

int square (int num)
{
	return (num*num);
}
