/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 28 Feb 2021 11:51:18 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char* p = "\xffu"; // 错误：十六进制转义在范围外
    char* q = "\xff""f";
    printf("%s\n", p);
    printf("%s\n", q);
    return 0;
}
