#include <stdio.h>

int main () {
    int input_value;
    if(scanf("%d", &input_value) != 1) {
        printf("n/a");
        return 0;
    }
    if(input_value < 0) {
        input_value *= (-1);
    }
    int number = input_value;
    int number_temp;
    int mult = 1;
    int odd_flag = 0;
    while (number > 0) {
    number_temp = number % 10;
    //printf("number temp = %d ", number_temp);
        if((number_temp % 2) == 1) {
            odd_flag += 1;
            mult *= number_temp;
        }
    number  /= 10;
    }
    printf("%d", (odd_flag == 0) ? 0 : mult);
    return 0;
}