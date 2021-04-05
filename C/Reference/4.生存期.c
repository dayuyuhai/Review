/*************************************************************************
	> File Name: 4.生存期.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 Mar 2021 10:49:15 PM CST
 ************************************************************************/

#include<stdio.h>
int* foo(void) {
    int a = 17; // a****拥有自动存储期
    printf("%p\n", &a);
    return &a;
}  // a的生存期结束
int main(void) {
    int* p = foo(); // p 指向生存期结束后的对象（“悬垂指针”）
    // int n = *p; // 未定义行为
    // printf("%d\n", *p);
    printf("%p\n", p);
    return 0;
}
