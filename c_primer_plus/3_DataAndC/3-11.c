#include <stdio.h>
#include <string.h>

//10^7 = e7
#define YEARSECOND         3.156e7
#define WATERMOLECULARMASS 3.0e-23
#define INCH               2.54

typedef enum testNmuber{
    Num1 = 1,
    Num2,
    Num3,
    Num4,
    Num5,
    Num6,
    Num7,
    Num8
}number_e;

void test1(void) {
    int a = 2147483647;
    int b = 2147483648;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
}

void test2(void) {
    int ascii;
    printf("please input ASCII: \n");
    scanf("%d", &ascii);

    printf("ASCII:%d = %c \n", ascii, (char)ascii);
}

void test3(void) {
    //发出警报是\a, \b是backspace
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");
}

void test4(void) {
    float point;

    printf("please input a float number: \n");
    scanf("%f", &point);

    printf("Enter a floating-point Value: %.2f\n", point);
    printf("fixed-point notation: %f\n", point);
    printf("exponential notation: %e\n", point);
    printf("p notation: %a\n", point);
}

void test5(void) {
    int age;
    printf("please input your age: \n");
    scanf("%d", &age);
    printf("you alive %.0lf second\n", YEARSECOND * age);
}

void test6(void) {
    int num;
    printf("plese input water kua: \n");
    scanf("%d", &num);
    printf("There are water rmolecular %.0f\n", num*950/WATERMOLECULARMASS);
}

void test7(void) {
    int inch;
    printf("please input your length(inch): \n");
    scanf("%d", &inch);
    printf("your length is %.2f cm\n", inch * INCH);
}

//显然这个题用float型更合适，杯数除以其他的会有小数
void test8(void) {
    double glass;
    printf("please input glass number: \n");
    scanf("%lf", &glass);
    printf("there has %.2f pint.\n", glass / 2);
    printf("there has %.2f gusi.\n", glass * 8);
    printf("there has %.2f tang.\n", glass * 4);
    printf("there has %.2f cha.\n", glass * 4 / 3);
}

int main(void)
{
    number_e number;
    int data;

    printf("Please input you select which test: 1, 2, ...\n");
    scanf("%d", &data);
    number = (number_e) data;

    printf("\n************************\n");
    printf("* this is test%d result *", number);
    printf("\n************************\n");
    switch(number) {
        case Num1:
            test1();
            break;
        case Num2:
            test2();
            break;
        case Num3:
            test3();
            break;
        case Num4:
            test4();
            break;
        case Num5:
            test5();
            break;
        case Num6:
            test6();
            break;
        case Num7:
            test7();
            break;
        case Num8:
            test8();
            break;
    }

    return 0;
}
