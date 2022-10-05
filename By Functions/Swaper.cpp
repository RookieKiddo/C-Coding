#include <stdio.h>

void swaper (int num1, int num2)
{
	printf("Before Swaping : n1= %d , n2= %d",num1,num2);
	printf("\n");
	printf("After Swaping : n1= %d , n2= %d",num2,num1);
}

int main ()
{
	int num1,num2;
	
	printf("Enter The First Number : ");
	scanf("%d",&num1);
	
	printf("Enter The Second Number : ");
	scanf("%d",&num2);
	
	swaper (num1,num2);
	
	return 0;
}
