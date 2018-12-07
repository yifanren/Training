#include <stdio.h>

int main(void)
{
    char buf[10] = "smile!";

    for (int j = 0; j < 3; j++) {
        for (int i = 3; i - j > 0; i--)
            printf("%s", buf);
        printf("\n");
    }

    return 0;
}
