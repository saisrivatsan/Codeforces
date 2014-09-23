#include <stdio.h>
/* Function to get no of set bits in binary
   representation of passed binary no. */
int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

/* Program to test function countSetBits */
int main()
{
    for(int i =0;i<32;i++)
        printf("%d %d\n",i,countSetBits(i));
    return 0;
}
