#include<stdio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter the values for a b c \n");
 
 scanf("%d%d%d", &a,&b,&c);
 if(a>b && a>c)
printf("a is big");
else if(b>a && b>c)
printf("b is big");
else
printf("c is big");

getch();
return 0;
}
