#include<stdio.h>
main()
{
char c;
clrscr();
printf("enter the character to find vowel or not");
scanf("%c", &c);
if(c == 'a' || c == 'e' || c== 'i' || c== 'u' || c== 'o' )
printf(" \n character is consonant");
else
printf("\n character is vowel");
getch();
return 0;
}
