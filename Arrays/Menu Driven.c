#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Append ();
int PosAppend (); 
int Insert ();  
void Replace ();  
void Delete ();  
void ValueSearch ();  
void PosSearch ();  
void OddSort ();
void EvenSort();
void AscSort ();
void DscSort ();
int Display ();
int a[10];
int SizeOfArr=10;
int capacity=10;

int main ()
{
	int value,position,choice;
	
	while (1)
	{
		printf("\n\t\t=====================\n");
		printf("\t\t\tMain Menu\n");
		printf("\t\t=====================\n");
		
		printf("Choose From The Following Options:-\n");
		
		printf("1. Append \n2. Insert \n3. Replace \n4. Delete \n5. Search \n6. Sort \n7. Display \n8. Exit\n");
		printf("Option : ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1: //Append//
			{
				system("cls");
				printf("You Have Chosen Append\n");
				printf("How Do You Want To Append :-\n");
				printf("1. Sequential Append \n2. Positional Append\n");
				printf("Option : ");
				scanf("%d",&choice);
				
				if (choice==1)
				{
					printf("\nYou Have Chosen Sequential Append\n");
					Append ();
				}
				else
				{
					printf("\nYou Have Chosen Positional Append\n");
					PosAppend ();
				}
			break;
			}
			
			case 2: //Insert//
			{
				system("cls");
				printf("You Have Choosen Insert\n");
				Insert();
				break;
			}
			
			case 3: //Replace//
			{
				system("cls");
				printf("You Have Choosen Replace\n");
				Replace();
				break;
			}
			
			case 4: //Delete//
			{
				system("cls");
				printf("You Have Choosen Delete\n");
				Delete();
				break;
			}
			
			case 5: //Search//
			{
				system("cls");
				printf("You Have Choosen Search\n");
				printf("What Kind of Search Do You Want :-\n");
				printf("1.Value Search \n2.Positional Seach\n");
				printf("Option : ");
				scanf("%d",&choice);
				
				if (choice==1)
				{
					printf("\nYou Have Chosen Value Search");
					ValueSearch();
				}
				
				else 
				{
					printf("\nYou Have Chosen Positional Search");
					PosSearch();
				}
				break;
			}
			
			case 6: //Sort//
			{
				system("cls");
				printf("You Have Choosen Sort\n");
				printf("How Do You Want To Sort :-\n");
				printf("1. Odd Sort \n2. Even Sort \n3. Ascending Sort \n4. Descending Sort\n");
				printf("Option : ");
				scanf("%d",&choice);
				
				if (choice==1)
				{
					printf("\nYou Have Choosen Odd Sort\n");
					OddSort();
				}
				
				else if (choice==2)
				{
					printf("\nYou Have Choosen Even Sort\n");
					EvenSort();
				}
				
				else if (choice==3)
				{
					printf("\nYou Have Choosen Ascending Sort\n");
					AscSort();
				}
				
				else 
				{
					printf("\nYou Have Choosen Descending Sort\n");
					DscSort();
				}
			break;
			}
			
			case 7:
			{
				system("cls");
				Display ();
				break;	
			}
			
			case 8:
			{
				printf("\n\t=======================================\n");
				printf("\tThank-You For Using The Program\n");
				printf("\t=======================================\n");
				return 0;
			}
			
			default:
			{
				printf("Invalid Choice");
				break;
			}	
		}
	}
}

int Append ()
{	
	int i,n,choice=0;
			
		if (capacity==0)
		{
		printf("Overflow Error");
		return 0;
		}
		
		printf("The Values Must Be Less Than 10, Otherwise You Will Be Redirected To Main Menu\nHow Many Values Do You Want To Insert : ");
		scanf("%d",&n);
		
		if(n>10)
		{
			printf("Not Enough Space, Overflow Error");
			return 0;
		}
		
		for (i=0; i<n; i++)
		{
			printf("Enter The %d Value: ",i+1);
			scanf("%d",&a[i]);
			capacity--;
		}
}
	
int PosAppend()
{
	int position, value,n,i;
	
		if (capacity==0)
		{
		printf("Overflow Error");
		}
		
		printf("The Values Must Be Less Than 10, Otherwise You Will Be Redirected To Main Menu\nHow Many Values Do You Want To Insert : ");
		scanf("%d",&n);
		
		if(n>10)
		{
			printf("Not Enough Space, Overflow Error");
			return 0;
		}
		
		for (i=0; i<n; i++)
		{
			printf("Enter The Position : ");
			scanf("%d",&position);
			
			if (position>10)
			{
				printf("Invalid Position");
				break;
			}
			
			printf("Enter The %d Value : ",position);
			scanf("%d",&value);
			
			a[position-1]=value;
			
			capacity--;
		}
}	

int Insert ()
{	
	int i, position, value;
	
	if (capacity==0)
	{
		printf("Overflow Error");
		return 0;
	}
	
	printf("Enter The Position : ");
	scanf("%d",&position);
	
	printf("Enter The Value : ");
	scanf("%d",&value);
	
	for (i=SizeOfArr-1; i>=position-1; i--)
	{
		a[i+1]=a[i];
	}
	
	a[position-1]=value;
}

void Replace ()
{
	int i,position,value;
	
	printf("Enter The Position : ");
	scanf("%d",&position);
	
	printf("Enter The Value : ");
	scanf("%d",&value);
	
	for (i=SizeOfArr-1; i>=position-1; i--)
	{
		a[position-1]=value;
	}
}

void Delete()
{
	int position,i;
	
	printf("Enter The Position You Want To Delete : ");
	scanf("%d",&position);
	
	if (position>10)
	{
		printf("Invalid Number Deletion Not Possible");
	}
	
	else 
	{
		for (i=position-1; i<SizeOfArr-1;i++)
		{
			a[i]=a[i+1];
		}
	}
}

void ValueSearch()
{
	int i, value;
	
	printf("Enter The Value You Want To Search : ");
	scanf("%d",&value);
	
	for (i=0; i<SizeOfArr-1; i++)
	{
		if (a[i]==value)
		{
			printf("Value %d found at %d Location",value,i+1);
		}
	}
	
	if (i==SizeOfArr-1)
	{
		printf("Element Not Found");
	}
}

void PosSearch()
{
		int i, position;
	
	printf("Enter The Position You Want To Search : ");
	scanf("%d",&position);
	
	for (i=0; i<SizeOfArr-1; i++)
	{
		if (a[i]==position)
		{
			printf("Value %d found at %d Location",a[i],position);
		}
	}
	
	if (i==SizeOfArr-1)
	{
		printf("Element Not Found");
	}
}

void OddSort()
{
	int i=0;
	
	printf("All Odd Numbers In The Array Are :- \n");
	
	for (i=0; i<SizeOfArr-1; i++)
	{
		if (a[i]%2!=0)
		{
			printf("%d",a[i]);
		}
	}
}

void EvenSort()
{
	int i=0;
	
	printf("All Even Numbers In The Array Are :- \n");
	
	for (i=0; i<SizeOfArr-1; i++)
	{
		if (a[i]%2==0)
		{
			printf("%d",a[i]);
		}
	}
}

void AscSort()
{
	int i,j,n;
	
	printf("Elements Have Been Sorted In Asceding Order");
	
	for (i=0; i<SizeOfArr-capacity; i++)
	{
		for (j=0; j<SizeOfArr-capacity; j++)
		{
			if (a[i]<a[j])
			{
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
}

void DscSort()
{
	int i,j,n;
	printf("Elements Have Been Sorted In Descending Order");
	
	for (i=0; i<SizeOfArr-capacity; i++)
	{
		for (j=0; j<SizeOfArr-capacity; j++)
		{
			if (a[i]>a[j])
			{
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
}

int Display ()
{
	int i;
	system ("cls");
	
	if (SizeOfArr==capacity)
	{
		printf("There are NO values in the Array");
		return 0;
	}
	printf("The Values In Array Are :- \n");
	
	for (i=0; i<10; i++)
	{
		printf("Element %d of Array is %d\n",i+1,a[i]);
	}
}
