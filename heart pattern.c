#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
   printf("Enter value of n=");
   scanf("%d", &n);

   /* FOR THE APEX OF HEART */
   for(i=n/2; i<=n; i+=2)
   {
       // FOR SPACE BEFORE PEAK-1 : PART 1
       for(j=1; j<n-i; j+=2)
       {
           printf(" ");
       }
       // FOR PRINTING PEAK-1 : PART 2
       for (j=1; j<=i; j++)
       {
           printf("*");
       }
       // FOR SPACE B/W PEAK-1 AND PEAK-2 : PART 3
       for(j=1; j<=n-i; j++)
       {
           printf(" ");
       }
       // FOR PRINTING PEAK-2 : PART 4
       for(j=1; j<=i; j++)
       {
           printf("*");
       }
       printf("\n");
   }

   /*FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE */
   for(i=n; i>=0; i--)
   {
       // FOR SPACE BEFORE THE INVERTED TRIANGLE : PART 5
       for(j=i; j<n; j++)
       {
           printf(" ");
       }
       // FOR PRINTING THE BASE OF TRIANGLE : PART 6
       for(j=1; j<=((i*2)-1); j++)
       {
           printf("*");
       }
       printf("\n");
   }
   return 0;
}




/*Example:
n=10

  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *
*/
