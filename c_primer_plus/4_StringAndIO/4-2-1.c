#include <stdio.h>
#include <string.h>

int main(void)
{
    // data = "ab" 时，打印出来的是有异常的。
    // len = 6, data = ab 
    //                    
    // 会打印出空格，并且len = 6
    // 当data = "a" 时，打印正常，len = 1;
    //
    // 疑问：什么原因导致的，是字符串末尾的\0吗？
    // strlen() 的作用：它从内存的某个位置（可以是字符串开头，中间某个位置，
    // 甚至是某个不确定的内存区域）开始扫描，直到碰到第一个字符串结束符'\0'为止，
    // 然后返回计数器值(长度不包含'\0')。
    //
    // 原因：char data[2],存放了ab, \0存放到了其他位置。
    // 而stlen是检测\0,这个时候就会出现错误。
    // 那为什么在编译的时候不会报错呢？
    char data[2] = "a";
    printf("data[0] = %p, data[0] = %c\n", &data[0], data[0]);
    printf("data[1] = %p, data[1] = %c\n", &data[1], data[1]);
    printf("data[2] = %p\n", &data + 1);
    int len = strlen(data);

    printf("len = %d, data = %s\n", len, data);
    return 0;
}
