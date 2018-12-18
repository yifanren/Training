#include <stdio.h>
#include <string.h>

typedef enum exercises{
    NUM1 = 1,
    NUM2,
    NUM3
}exe;

void test1(void) {
    char name[32];
    char famile_name[32];
    printf("Hi, what's your name?\n");
    printf("what's your famile_name. \n");
    scanf("%s", name);
    scanf("%s", famile_name);

    printf("ok, your full name is \"%s,%s\" \n", name, famile_name);
}

void test2(void) {
    char name[32];
    char famile_name[32];
    printf("Hi, what's your name?\n");
    printf("what's your famile_name. \n");
    scanf("%s", name);
    scanf("%s", famile_name);

    printf("ok, your full name is \"%s,%s\"\n", name, famile_name);
    printf("ok, your full name is \"%20s,%20s\"\n", name, famile_name);
    //%*s 还可以指定输出字符宽度
    printf("ok, your full name is \"%*s,%*s\"\n", (int)strlen(name) +3, name,(int)strlen(famile_name) + 3, famile_name);
}

void test3(void) {
}


int main(void)
{
    printf("input test number: eg, 1, 2, 3, ...\n");
    int num;
    scanf("%d", &num);

    switch((exe)num) {
        case NUM1:
            test1();
            break;
        case NUM2:
            test2();
            break;
        case NUM3:
            test3();
            break;
    }
}
