#include <stdio.h>
#include <string.h>

int string ();
char alpha[100];

int main ()
{
	int a;
	printf("Enter The Sentence : ");
	gets(alpha);
	
	a=string();
	
	printf("The Number of Capital Letters Are : %d",a);
	
	return 0;
}

int string ()
{
	int i,count;
	
	for (i=0; ; i++)
	{
		if (alpha[i]>='A' && alpha[i]<='Z')
		{
			count++;
		}
		
		else if (alpha[i] == '\0')
		{
			break;
		}
		
	//	if  (alpha[i]>='a' && alpha[i]<='z')
	//	{
			
	//	}
	}
	
	return count;
}
