#include <stdio.h>

int main() {
    char first[30], middle[30], last[30], university[100];
    int age;
    float height;

    printf("Enter your full name: ");
    scanf("%s %s %s", first, middle, last);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your University name: ");
    scanf(" %[^\n]", university);

    printf("\nHi! Everyone. This is %c.%s %s %s from %s. I am %d years old and my height is %.1f cm tall.\n",
           last[0], first, middle, last, university, age, height);

    return 0;
}
