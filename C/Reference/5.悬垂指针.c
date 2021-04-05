/*************************************************************************
	> File Name: 5.悬垂指针.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 Mar 2021 10:56:51 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>
int *p = NULL;

int* func(void) {
    int a = 17; // a拥有自动存储期
    return &a;
}  // a的生存期结束

int main() {
    int *p = func(); // p 指向生存期结束后的对象（“悬垂指针”）
     
    printf("%p\n", p);
    
    return 0;
}
