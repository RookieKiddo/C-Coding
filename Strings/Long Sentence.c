#include<stdio.h>
#include<string.h>

void string();
char alpha[1000];

int main()
{
	printf("Enter The Sentence : ");
	gets(alpha);
	
	string();
	
	return 0;
}

void string()
{
	int i,alp=0,dig=0,blanks=0,tabs=0,others=0;
	
	for (i=0; ; i++)
	{
		if (alpha[i]=='\0')
		{
			break;
		}
		
		else if (alpha[i]>='A' && alpha[i]<='Z' || alpha[i]>='a' && alpha[i]<='z')
		{
			alp++;
		}
		
		
		else if (alpha[i]>='0' && alpha[i]<='9')
		{
			dig++;
		}
		
		else if (alpha[i]==' ')
		{
			blanks++;
		}
		
		else if (alpha[i]=='	')
		{
			tabs++;
		}
		
		else 
		{
			others++;
		}
	}
	
	printf("Alphabets : %d\n",alp);
	
	printf("Digits : %d\n",dig);
	
	printf("Blanks : %d\n",blanks);
	
	printf("Tabs : %d\n",tabs);
	
	printf("Others : %d\n",others);
}
