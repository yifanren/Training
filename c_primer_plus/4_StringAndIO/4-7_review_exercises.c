#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
#define Q "His Hamlet was funny without being vulgar."
#define BOOK "War and Peace"

typedef enum exercises{
    NUM1 = 1,
    NUM2,
    NUM3,
    NUM4,
    NUM5,
    NUM6,
    NUM7,
    NUM8,
    NUM9,
    NUM10,
    NUM11
}exe;

//发生%s 只取到了空格前的数据。这是正常现象
void test1(void) {
    float weight, volume;
    int size, letters;
    char name[40];

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);

    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);

}

void test2(void) {
    // He sold the painting for $234.50.
    printf("test 1 : He sold the painting for $%2.2f.\n", 2.345e2);
    // Hi!
    printf("test 2 : %c%c%c\n", 'H', 105, '\41');
    // His Hamlet was funny without being vulgar.  has 42 characters.
    printf("test 3 : %s\n has %ld characters.\n", Q, strlen(Q));
    // Is 1.20e+03 the same as 1201.00?
    printf("test 4 : Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
}

void test3(void) {
    printf("test 3 : \"%s\"\n has %ld characters.\n", Q, strlen(Q));
}

void test4(void) {
    printf("find error out!\n");
}

//打印出% 必须要用%%
void test5(void) {
    float cost = 12.99;
    float percent = 80.0;

    printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
    printf("That is %.0f%% of list\n", percent);
}

void test6(void) {
    printf("Result:\n");
    printf("a. %%d\n");
    printf("b. %%4X\n");
    printf("c. %10.3f\n", 232.346);
    printf("d. %12.2e\n", 2.33e002);
    printf("e. %-30s\n", "hello");
}

void test7(void) {
    printf("Result:\n");
	printf("a. %%15lu\n");
	printf("b. %%#4x\n");
	printf("c. %%-12.2E\n");
	printf("d. %%+10.3f\n");
	printf("e. %%8.8s\n");
}

//在printf()时，小数点前是字段宽度，小数点后是最少几位数字。
//同样可以切整形，字符串，浮点型的小数位。
void test8(void) {
    printf("Result:\n");
	printf("a. %%6.4d\n");
	printf("b. %%*o\n");
	printf("c. %%2c\n");
	printf("d. %%+0.2f\n");
	printf("e. %%-7.5s\n");

}

//测试scanf("%*s %d", &value);
//输入的字符都忽略掉, 空格后的值会存到value中.
//补充:为什么输入的字符都会忽略掉呢? 因为%s 遇到空格和回车结束 * 表示的是任意字符宽度.
void test9(void) {
    printf("Result:\n");
    printf("a. %%d\n");
    printf("b. %%f %%f\n");
    printf("c. %%s\n");
    printf("d. scanf(\"%%s %%d\")\n");
    printf("e. scanf(\"%%*s %%d\", value)\n");
}

void test10(void) {
    printf("空白包括制表符, 空格, 换行符. c语言用空白分隔符号. scanf()用空白分隔连续输入.\n");
}

//在格式化输入scanf()或输出printf() 中, 有修饰符和转换字符.
void test11(void) {
    printf("%%z 中的z 是修饰符, 不是转换字符. 所以需要在修饰符后面加上一个转换字符.\n");
    printf("如: %%zd 打印十进制数, %%zx 打印十六进制数\n");
}

int main(void)
{
    printf("input exercises number: eg, 1, 2, 3, ...\n");
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
        case NUM9:
            test9();
            break;
        case NUM10:
            test10();
            break;
        case NUM11:
            test11();
            break;
    }
}
