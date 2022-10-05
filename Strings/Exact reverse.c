#include <stdio.h>
#include <string.h>

void string();
char alpha[100];
char beta[100];

int main()
{
	printf("Enter First Word : ");
	gets(alpha);
	
	printf("Enter Second Word : ");
	gets(beta);
	
	string();
	
	
	return 0;
}

void string()
{
	int i;
	
	strrev(beta);
	
	if (strcmp(alpha,beta)==0)
	{
		printf("They are the exact reverse of each other");
	}
	else
	{
		printf("They are not the eaxct reverse of each other");
	}
}
