#include <stdio.h>

int main(void)
{
    short i = 1;
    int   a = 1;
    long  b = 1;

    printf("short = %ld\n", sizeof(i));
    printf("int = %ld\n", sizeof(a));
    printf("long = %ld\n", sizeof(b));


    return 0;
}
