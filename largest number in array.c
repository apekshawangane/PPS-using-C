#include <stdio.h>
int main()
{
 int arr[5] = {1, 9, 3, 7, 5}, max = arr[0];
 for (int i = 1; i < 5; i++)
 if (arr[i] > max) max = arr[i];
 printf("Largest: %d\n", max);
 return 0;
}