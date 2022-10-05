#include <stdio.h>

int fact (int num)
{
	if (num==1)
	return 1;
	
	return num * fact (num-1);
	
}

int main ()
{
	int numb=0,f;
	
	printf("Enter The Number You Want Factorial off : ");
	scanf("%d",&numb);
	
	f= fact(numb);
	
	printf("The Factorial of %d is %d",numb,f);
}
