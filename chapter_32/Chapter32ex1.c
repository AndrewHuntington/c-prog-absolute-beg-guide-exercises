/* The program demonstrates function returning a value by passing three
floating-point numbers (grades) and calculating the average of the three. */

#include <stdio.h>

// This is a function prototype
float gradeAve(float test1, float test2, float test3);

int main()
{
    float grade1, grade2, grade3, average;

    printf("What was the grade on the first test? ");
    scanf(" %f", &grade1);

    printf("What was the grade on the second test? ");
    scanf(" %f", &grade2);

    printf("What was the grade on the third test? ");
    scanf(" %f", &grade3);

    average = gradeAve(grade1, grade2, grade3);

    printf("\nWith those three grades, the average is %.2f\n", average);
    return 0;
}

float gradeAve(float test1, float test2, float test3)
{
    return (test1 + test2 + test3) / 3;
}