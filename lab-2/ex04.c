#include <stdio.h>

int main() {
    char name[100];
    int student_id;
    float prog, phys, calc;

    printf("Enter your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter your student ID: ");
    scanf("%d", &student_id);

    printf("Enter your Programming score: ");
    scanf("%f", &prog);

    printf("Enter your Physics score: ");
    scanf("%f", &phys);

    printf("Enter your Calculus score: ");
    scanf("%f", &calc);

    float gpa = (prog + phys + calc) / 3.0;

    printf("Hi %s(%d)! Your GPA is %.2f\n", name, student_id, gpa);

    return 0;
}
