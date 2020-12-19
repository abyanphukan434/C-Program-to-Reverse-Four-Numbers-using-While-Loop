#include <stdio.h>

int main()
{
  int i, rev = 0, remainder;
  printf("Enter four numbers:");
  scanf("%d", &i);
  while(i != 0)
  {
    remainder = i % 10;
    rev = rev * 10 + remainder;
    i /= 10;
  }
  
  printf("Reversed Number = %d", rev);
  return 0;
}
