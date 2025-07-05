#include <stdio.h>

int main() 
{



    int num, rem, check = 0;
    printf("Enter the number = ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        rem = num % i;
        if (rem == 0) {
            check = 1;
            break; // Not a prime, so break the loop early
        }
    }

    if (check == 0)
        printf("Number is Prime\n");
    else
        printf("Number is NOT Prime\n");

    return 0;
}