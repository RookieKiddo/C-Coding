#include <stdio.h>

int *ArrayAdd(int *a, int *b);

int main()
{
	int arr1[5]={5,4,3,2,1};
	int arr2[5]={1,2,3,4,5};
	
	int *arr3;
	
	arr3 = ArrayAdd(arr1, arr2);
	
	printf("%d %d",arr1[0],arr2[1]);
}

int *ArrayAdd(int *a, int *b)
{
	int *c[5];
	int i;
	
	for (i=0; i<5; i++)
	{
		c[i] = a[i] + b[i];
	}
	
	return c;
}
