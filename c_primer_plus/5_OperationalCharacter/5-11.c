#include <stdio.h>

#define MIN_PER_HOR  60
#define DAY_PER_WEEK 7
#define CM_PER_INCH  2.54

typedef enum testNum{
    NUM1 = 1,
    NUM2,
    NUM3,
    NUM4,
    NUM5,
    NUM6,
    NUM7,
    NUM8
}num;

void test1(void) {
    int min, hour, left;

    printf("Convert minuter to hour and minuter.\n");
    printf("Enter the number of minuter(<=0 quit): \n");
    scanf("%d", &min);
    while (min > 0) {
        hour = min / MIN_PER_HOR;
        left = min % MIN_PER_HOR;
        printf("%d minuter is %d hour, %d minuter.\n", min, hour, left);
        printf("Enter the number of minuter(<=0 quit): \n");
        scanf("%d", &min);
    }
    printf("Done!\n");
}

void test2(void) {
    printf("Enter the number: \n");
    int data;
    int sec = 10;
    scanf("%d", &data);

    do {
        printf("%d ", data++);
    } while(sec--);
    printf("\n");
}

void test3(void) {
    int day;
    printf("Enter the number of day(<=0 quit!): \n");
    scanf("%d", &day);
    while (day > 0) {
        printf("%d day are %d weeks, %d days.\n", day, day / DAY_PER_WEEK, day % DAY_PER_WEEK);
        printf("Enter the number of day(<=0 quit!): \n");
        scanf("%d", &day);
    }
    printf("Done!\n");
}

void test4(void) {
    float height;
    printf("Enter a height in centimeters: \n");
    scanf("%f", &height);
    while (height > 0) {
        //printf("%f cm = %d feet, %f inchs\n", height, height / CM_PER_INCH, height - height / CM_PER_INCH);
        printf("Enter a height in centimeters (<=0 quit!): \n");
        scanf("%f", &height);
    }
    printf("bye\n");
}

void test5(void) {
    printf("Eneter the number of your work days: \n");

    int count, sum = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
        sum += i;

    printf("sum = %d\n", sum);
}

void test6(void) {
    printf("Eneter the number of your work days: \n");

    int count, sum = 0;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
        sum += i * i;

    printf("sum = %d\n", sum);
}

void test7(void) {
    printf("Eneter a number(double): \n");

    double data, product;
    scanf("%lf", &data);

    product = data * data * data;

    printf("product = %.2lf\n", product);
}

void test8(void) {
    printf("This program computes moduli.\n");

    int data, nextdata;
    printf("Enter an interger to serve as the second operand: ");
    scanf("%d", &data);
    printf("Now enter the first operand: ");
    scanf("%d", &nextdata);

    printf("%d %% %d is %d\n", nextdata, data, nextdata % data);

    while (1){
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &nextdata);
        if (nextdata <= 0)
            break;
        printf("%d %% %d is %d\n", nextdata, data, nextdata % data);
    }    printf("Done!\n");

}

int main(void)
{
    int data;
    printf("Please input Number(eg: 0, 1, 2...): \n");

    scanf("%d", &data);
    switch ((num)data) {
        case NUM1:
            test1();
            break;
        case NUM2:
            test2();
            break;
        case NUM3:
            test3();
            break;
        case NUM4:
            test4();
            break;
        case NUM5:
            test5();
            break;
        case NUM6:
            test6();
            break;
        case NUM7:
            test7();
            break;
        case NUM8:
            test8();
            break;
    }

    return 0;
}
