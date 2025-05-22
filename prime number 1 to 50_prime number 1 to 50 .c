#include <stdio.h>

int main() {
    int i, j, flag;

    printf("Prime numbers between 1 and 50 are:\n");

    for (i = 2; i <= 50; i++) {
        flag = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }

    return 0;
}
    
    