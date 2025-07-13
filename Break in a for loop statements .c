#include <stdio.h>

int main()
 {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // exit the loop when i is 5
        }
        printf("i = %d\n", i);
    }

    printf("Loop ended because of break statement.\n");

    return 0;
}