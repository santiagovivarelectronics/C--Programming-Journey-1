student_profile.c
#include <stdio.h>

int main()
{
    // Student Profile Program
    /* Your Exercise

Make a Programm that:

Asks:
name
age
high
math grade
And then print somtihing like that:
Student Profile
----------------
Name: Santiago
Age: 22
Height: 1.78
Math Grade: A*/

    char NAME[20];
    int Age;
    double Height;
    char GRADE;

    printf("Hi lovely Student!\n");

    printf("Please enter your Name: ");
    scanf("%s", NAME);

    printf("Thank you %s\n", NAME);

    printf("Please enter your Age: ");
    scanf("%d", &Age);

    printf("Thank you %s\n", NAME);

    printf("Now please enter your Height: ");
    scanf("%lf", &Height);

    printf("Thank you %s\n", NAME);

    printf("Now please enter your Math Grade: ");
    scanf(" %c", &GRADE);

    printf("\n");
    printf("Student Profile\n");
    printf("---------------------\n");

    printf("Name: %s\n", NAME);
    printf("Age: %d\n", Age);
    printf("Height: %.2lf\n", Height);
    printf("Grade: %c\n", GRADE);

    printf("\n");
    printf("Have a Good Day!\n");
    printf("Welcome to Embedded Systems Engineering!\n");

    return 0;
}

  
