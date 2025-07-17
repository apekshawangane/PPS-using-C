#include <stdio.h>
int main()
{
 int a = 10, *ptr = &a;
 printf("Value: %d, Address: %p\n", *ptr, ptr);
 return 0;
}