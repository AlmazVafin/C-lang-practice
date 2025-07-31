#include <stdio.h>

int main(void) {
    int max_value = -1;
    int cur_value;
    while((scanf("%d", &cur_value) == 1) && (cur_value != -1)) {
        if(max_value < cur_value) {
            max_value = cur_value;
        }
    }  
    printf("%d", max_value);
    return 0;
}