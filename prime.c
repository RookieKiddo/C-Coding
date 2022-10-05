# include <stdio.h>
int main ()
{
	int i=3;
	int j=2;
	int count=2;
	int num=0;
	
	printf("Enter The Range You Want Prime Numbers in : ");
	scanf("%d",&num);
	printf("%d\n",j);
	
   for ( count = 2 ; count <= num ;  )
   {
      for ( j = 2 ; j < i-1 ; j++ )
      {
         if ( i%j == 0 )
            break;
      }
      if ( j == i )
      {
         printf("%d\n", i);
         count++;
      }
      i++;
   }
 
   return 0;
}
