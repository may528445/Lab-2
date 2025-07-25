#include <stdio.h>

int main() {
    char name[100], university[100];
    int age;
    float height;

    printf("Enter your full name: ");
    scanf(" %[^\n]", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your heght: ");
    scanf("%f", &height);

    printf("Enter you University name: ");
    scanf(" %[^\n]", university);

    printf("\nHi! Everyone. This is K.%s from %s. I am %d years old and my height is %.1f cm tall.\n",
           name, university, age, height);

    return 0;
}
