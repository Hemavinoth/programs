#include<stdio.h>
main()
{
char c;
clrscr();
printf("enter the alphabet");
scanf("%c", &c);
if(isalpha(c))
printf(" \n allphabet");
else if(isdigit(c))
printf("\n number");
else
printf("not a valid input");
getch();
return 0;
}
