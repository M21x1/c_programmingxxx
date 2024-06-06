#include <stdio.h>

void PrintBanner();     // Function declaration

//void PrintBanner()      // Function definition .....(function declaration and definition)
//{
  //  printf("==============================================\n");
//}

int main(void){
    PrintBanner();
    printf("A simple C program.\n");
    PrintBanner();
}

void PrintBanner()      // Function definition 
{
    printf("==============================================\n");
}


