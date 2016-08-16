
#include <stdio.h>

int main(void) {
	int d,i,j;
	scanf("%d",&d);
	int s[d];
	for(i=0;i<d;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<d;i++)
	{
		for(j=1;j<d-1;j++)
		{
			if((s[i]+s[j])==0)
			{
			printf("%d\t%d\n",s[i],s[j]);	
			}
			
		}
	}
	// your code goes here
	return 0;
}
