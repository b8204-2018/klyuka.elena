#include <iostream>
#include "stdio.h"
int main() {
    int i=0, a, b;
    printf("Vvedite kol-vo elementov massiva:\n");
    scanf ("%d", &a);
    int *p=new int[a];
    for (i=0; i<a;) {
        printf("Vvedite element:");
        printf("\n");
        scanf ("%d", &p[i]);
        i++;
    };
    i=0;
    b=0;
    printf("Massiv:\n" );
    while (i!=a){
        printf("%d\n", p[i]);
        b=b+p[i];
        i++;
    };
    printf("SUM=: " );
    printf("%d\n", b);
    return 0;
}