include<stdio.h>
int main()
{
int n,sum=0,i;
clrscr();
printf("enter the range for n");
scanf("%d", &n);

for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("the sum of N numbers is %d", sum);
getch();
return 0;
}
