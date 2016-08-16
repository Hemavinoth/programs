#include<stdio.h>
#include<stdlib.h>
void reverse(int a[],int size[])
{
int i,j;
for(i=0;i<size;i++)
 for(j=i+1;j<size;j++)
if(a[i]==a[j])
printf("%d",a[i]);
}

int main()
{
int a[]={8,1,7,9,3,0,0,1,0,7};
int asize=sizeof(a)/sizeof(a[0]);
reverse(a,asize);
getch();
return 0;
}
