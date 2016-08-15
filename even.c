#include<stdio.h>
int main()
{
int n;
printf("enter the value for n");
scanf("%d",&n);
if(n>0)
{
 if(n%2==0)
 printf("n is even number %d", n);
 else if
 printf("n is odd number %d", n);
 else
 printf("n is not a number");
}
getch();
return 0;
}