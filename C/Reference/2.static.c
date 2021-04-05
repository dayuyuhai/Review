/*************************************************************************
	> File Name: 2.static.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 Mar 2021 05:14:56 PM CST
 ************************************************************************/

#include<stdio.h>
#include"2-test.h"

void cc(int *a) {
    a[0] += 100;
    printf("%d\n", a[0]);
}

void aa() {
    int c[10] = {1, 2};
    c[0]++;
    cc(c);
}

int main() {
    /*
    a++;
    b++;
    // func();
    printf("%d %d\n", a, b);
    */
    aa();
    aa();

    return 0;
}
