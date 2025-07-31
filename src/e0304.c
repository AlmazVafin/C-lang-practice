#include <stdio.h>

int main(void) {
    int A;
    int B;
    int C;
    if(scanf("%d %d %d", &A, &B, &C) != 3) {
        printf("n/a");
        return 0;
    }
    if (((C < A) && (C > B)) || ((C > A) && (C < B))) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}