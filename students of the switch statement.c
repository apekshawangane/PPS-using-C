#include <stdio.h>

int main() 
{
    int grade;
    printf("Enter grade number (1 to 6):\t");
    scanf("%d", &grade);

    switch (grade) {
        case 1:
            printf("Grade A");
            break;
        case 2:
            printf("Grade B");
            break;
        case 3:
            printf("Grade C");
            break;
        case 4:
            printf("Grade D");
            break;
        case 5:
            printf("Grade E");
            break;
        case 6:
            printf("Grade F");
            break;
        default:
            printf("Invalid Marks");
    }

    return 0;
}