#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    // вводим размер матриц
    if( (scanf("%d", &N) != 1) || (N <=0)) {
        printf("n/a");
        return 0;
    }
    // выделяем память
    //указатели на строки
    int **A = (int**)malloc(N * sizeof(int*));
    int **B = (int**)malloc(N * sizeof(int*));
    int **C = (int**)malloc(N * sizeof(int*));
    //указатели на элементы
    for (int i=0; i<N;i++) {
        A[i] = (int*)malloc(N*sizeof(int));
        B[i] = (int*)malloc(N*sizeof(int));
        C[i] = (int*)malloc(N*sizeof(int));   
    }

    // вводим элементы матрицы А
    for (int i = 0; i<N; i++){
        for (int j = 0; j < N; j++) {
            if(scanf("%d", &A[i][j]) != 1) {
                printf("n/a");
                for (int k = 0; k < N; k++) {
                    free(A[k]);
                    free(B[k]);
                    free(C[k]);
                }
                free(A);
                free(B);
                free(C);
                return 0;
            }
        }
    }

    // вводим элементы матрицы B
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) {
            if ( scanf( "%d", &B[i][j]) != 1) {
                printf("n/a");
                for (int k = 0; k < N; k++) {
                    free(A[k]);
                    free(B[k]);
                    free(C[k]);
                }
                free(A);
                free(B);
                free(C);
                return 0;
            }
        }
    }

    // умножаем матрицы
    for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k< N; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // выводим результат
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", C[i][j]);
            if (j < (N-1)) {
                printf(" ");
            }
        }
        if ( i < (N-1)) {
            printf("\n");
        }
    }
    //освобождаем память
    for (int k =0; k < N; k++) {
        free(A[k]);
        free(B[k]);
        free(C[k]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}