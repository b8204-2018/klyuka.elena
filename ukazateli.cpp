#include <iostream>
#include "stdio.h"

int main() {
    int a, b;
    scanf ("%d", &a);
    scanf ("%d", &b);
    int *p1, *p2;
    p1=&a;
    p2=&b;
    *p1=*p2-*p1;
    *p2=*p2-*p1;
    *p1=*p1+*p2;
    printf("%d\n", *p1);
    printf("%d", *p2);
    return 0;
}