#include <stdio.h>

int main() 
{
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks > 100 || marks < 0) {
        printf("Invalid marks, please enter valid marks (0–100).\n");
    } else if (marks >= 90) {
        printf("Grade A - Excellent\n");
    } else if (marks >= 80) {
        printf("Grade B - Very Good\n");
    } else if (marks >= 70) {
        printf("Grade C - Good\n");
    } else if (marks >= 60) {
        printf("Grade D - Satisfactory\n");
    } else {
        printf("Grade E - Fail\n");
    }

    return 0;
}