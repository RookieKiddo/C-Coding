#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void Copy();

char name[50];
char namecopy[50];

int main()
{
	printf("Enter The Source String : ");
	gets(name);
	
	Copy();
	
	return 0;
}

void Copy()
{
	int i;
	
	for (i=0; ; i++)
	{
		if(name[i] =='\0')
		{
			break;
		}
		else
		{
			namecopy[i]=name[i];
		}
	}
	
	printf("The Destination Source : ");
	puts(namecopy);
}
