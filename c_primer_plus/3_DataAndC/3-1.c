#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("please enter your weight in pounds: ");

    scanf("%f",&weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f. $%9f\n", value, value);

    printf("%2d, %#x\n", 100, 100);
    return 0;
}
