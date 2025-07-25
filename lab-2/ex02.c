#include <stdio.h>

int main() {
    int total, hours, minutes;

    printf("Enter total minutes: ");
    scanf("%d", &total);

    hours = total / 60;
    minutes = total % 60;

    printf("%d minutes is %d hour(s) and %d minute(s)\n", total, hours, minutes);

    return 0;
}
