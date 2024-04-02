#include <stdio.h>

// count characters in input; 1st version 

int main(){
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc); // Do not forget to press enter then Ctrl + D (or Ctrl + Z)
}