#include <stdio.h>
#define INT_SIZE 32
 
int getSingle(int a[], int n)
{

    int result = 0;
 
    int x, sum;
    for (int i = 0; i < INT_SIZE; i++)
    {
     
      sum = 0;
      x = (1 << i);
      for (int j=0; j< n; j++ )
      {
          if (a[j] & x)
            sum++;
      }
      if (sum % 3)
        result |= x;
    }
 
    return result;
}
 

int main()
{
    int a[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7};
    int n = sizeof(a) / sizeof(a[0]);
    printf("The element with single occurrence is %d ",
            getSingle(a, n));
    return 0;
}
