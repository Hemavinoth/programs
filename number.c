#include<stdio.h>
int main()
{
int n;
printf("enter the value for n");
scanf("%d",&n);
if(n==0)
printf("n is zero");
else if(n>=1)
printf("n is positive number");
else
printf("n is negative number");
getch();
return 0;
}