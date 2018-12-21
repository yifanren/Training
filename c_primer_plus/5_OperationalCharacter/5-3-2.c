#include <stdio.h>

#define SEC_PER_MIN 60

int main(void)
{
    //求模运算，可以用来控制循环在指定的数值内。%3， 值只能为0，1，2
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");

    scanf("%d", &sec);
    while (sec > 0) {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);

        printf("Enter the number of seconds (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}
