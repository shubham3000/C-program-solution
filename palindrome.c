#include<stdio.h>

void main()

{

int num,rem,inv=0,num1;

printf("Enter the number\n");

scanf("%d",&num);

num1=num;

while(num>0)
  {

    rem=num%10;

    inv=inv*10+rem;

    num=num/10;

  }

  if(num1==inv)

    printf("It is a palindrome\n");

  else

printf("It is not a palindrome\n");

}
