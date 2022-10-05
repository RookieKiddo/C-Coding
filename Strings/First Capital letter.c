#include<stdio.h>
#include<string.h>

void string();
char alpha[100];

int main()
{
	printf("Enter The Sentence : ");
	gets(alpha);
	
	string();
	
	return 0;
}

void string()
{
	int i;
	
	for (i=0; ;i++)
	{
		if (alpha[i]=='\0')
		{
			break;
		}
		
		else if (i==0)
		{
			alpha[i]=alpha[i]-32;
		}
		
		else if (alpha[i]==' ')
		{
			alpha[i+1]=alpha[i+1]-32;
		}
	}
	
	printf("The Sentence After Rearranging is : ");
	
	puts(alpha);
}
