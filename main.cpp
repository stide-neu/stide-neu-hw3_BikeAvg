#include <stdio.h>

int main() {
    float distance;
    float fuel;
    printf("Input travelled distance: ");
    scanf("%f", &distance);
    printf("Input spent fuel: ");
    scanf("%f", &fuel);
    printf("Consumed: %.2f litters/100km", fuel / distance * 100);
    return 0;
}
