#include<stdio.h>
main()
{
int i;
char str[6];
clrscr();
printf("enter the word");
scanf("%s", &str);
for(i=0;i<=4;i++)
{
printf("\n %s", str);
}
getch();
return 0;
}