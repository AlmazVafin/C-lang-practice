#include <stdio.h>

int main(void) {
    int x;
    int y;
    int z;
    if(((scanf("%d %d %d", &x, &y, &z)) == 3) && ((x >= 0) && (y >= 0) && (z >= 0)) && ((x <= 1) && (y <= 1) && (z <= 1))) {
        if (x && (z || y)) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    else {
        printf("n/a");
    }
    return 0;
}