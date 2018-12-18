#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Maximum int value on this system = %d\n", INT_MAX);

    int a = 1;

    //对于字宽的表现只是%x所表示的地方。
    //sizeof(a) = *4                   *
    //如此
    int rev = printf("sizeof(a) = *%-20lu*\n", sizeof(a));
    printf("printf return value is %d\n", rev);

    return 0;
}
