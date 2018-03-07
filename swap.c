#include <stdio.h>

void swap(int *a ,int *b)
{
   *a = *a + *b;
   *b = *a - *b;
   *a = *a - *b;
}

void swap1(int *a,int *b)
{
   *a = *a ^ *b;
   *b = *a ^ *b;
   *a = *a ^ *b;
}
int main(void)
{
  int a = 10, b = 20;
  //swap(&a,&b);
  swap1(&a,&b);
  printf("%d,%d",a,b);
  return 0;
}
