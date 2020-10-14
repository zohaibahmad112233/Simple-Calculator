#include<stdio.h>
int main (void)
{
  int a;
  int b;
  int c;
  printf("enter your operation:\n");
  printf("1.addition   2.subtraction    3.multiplication    4.division\n ");
  scanf("%d",&a);
  printf("enter first number:");
  scanf("%d",&b);
  printf("enter second number:");
  scanf("%d",&c);


switch (a)
{
    case 1 :
    printf("addition is:%d",b+c);
    break;

    case 2:
    printf("subtraction is:%d",b-c);
    break;

    case 3:
    printf("multiplication is:%d",b*c);
    break;

    case 4 :

   if (b!=0)
    printf("division is:%d",b/c);
   else
    printf("number cannot be divided by 0");
    break;

      default:
        printf("incorrect operation !!");



}
}
