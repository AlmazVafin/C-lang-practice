#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if((scanf("%d",&n) != 1) || (n <= 0)) {
        printf("n/a");
        return 0;
    }
    int *vector1 = (int*)malloc(n * sizeof(int));
    if (vector1 == NULL) {
        printf("n/a");
        return 0;
    }

    int *vector2 = (int*)malloc(n * sizeof(int));
    if (vector2 ==NULL) {
        free(vector1);
        printf("n/a");
        return 0;
    }

    for(int i=0; i<n;i++) {
        if(scanf("%d",&vector1[i]) != 1) {
            free(vector1);
            free(vector2);
            printf("n/a");
            return 0;
        }
    }

    for (int i = 0 ;i < n; i++) {
        if(scanf("%d",&vector2[i]) != 1) {
            free(vector1);
            free(vector2);
            printf("n/a");
            return 0;
        }
    }
    long int result = 0;
    for(int i = 0; i<n ; i++) {
        result += (long)vector1[i] *vector2[i];
    }
    free(vector1);
    free(vector2);
    printf("%ld", result);
    return 0;
}