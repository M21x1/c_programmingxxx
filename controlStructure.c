#include <stdio.h>

int main(void){
    int x;
    int sum = 0;
    
    for (x = 0; x < 10; x++)
        sum = sum + x;
    
    printf("sum = %d\n", sum);
    printf("x = %d\n", x);

}
