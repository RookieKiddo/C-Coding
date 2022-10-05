#include <stdio.h>

int lsd (int n);
int msd (int numb);

int main ()
{
	int num,l,m;
	
	printf("Enter The Number : ");
	scanf("%d",&num);
	
	l=lsd(num);
	
	m=msd(num);
	
	printf("\nLeast Significant Digit is %d\n",l);
	
	printf("Most Significant Digit is %d",m);
	
	return 0;
}

int lsd (int n)
{
	int rem,a,b,c;
	
	rem=n%10;
	a=rem;
	n=n/10;
	
	rem=n%10;
	b=rem;
	n=n/10;
	
	rem=n%10;
	c=rem;
	n=n/10;
	
	if (a<b && a<c)
	{
		return (a);
	}
	
	else if (b<a && b<c)
	{
		return (b);
	}
	
	else
	{
		return (c);
	}
}

int msd (int numb)
{
	int rem,d,e,f;
	
	rem=numb%10;
	d=rem;
	numb=numb/10;
	
	rem=numb%10;
	e=rem;
	numb=numb/10;
	
	rem=numb%10;
	f=rem;
	numb=numb/10;
	
	if (d>e && d>f)
	{
		return (d);
	}
	
	else if (e>d && e>f)
	{
		return (e);
	}
	
	else
	{
		return (f);
	}
}
