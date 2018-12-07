#include <stdio.h>

int main(void)
{
    int a = 100;

    printf("dec = %d, octal = %o, hex = %x\n", a, a, a);
    printf("dec = %d, octal = %#o, hex = %#x\n", a, a, a);

    return 0;
}
