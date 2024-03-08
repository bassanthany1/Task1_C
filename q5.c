#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A , B, C ;
   printf("Enter First Number: ");
   scanf("%d",&A);
   printf("Enter second Number: ");
   scanf("%d",&B);
   printf("Enter Third Number: ");
   scanf("%d",&C);
   (A>B && A>C)? printf("The Largest number is:%d", A)
   :(B>A && B>C)? printf("The Largest number is:%d", B)
   : printf ("The Largest number is :%d",C);
}