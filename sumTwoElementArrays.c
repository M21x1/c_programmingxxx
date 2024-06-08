#include <stdio.h>
#define NUM_STUDENTS 10     // Saves us to replace the size of the array in other parts

int main(void)
{
    int Exam1[NUM_STUDENTS]; 
    int Exam2[NUM_STUDENTS];
    int Total[NUM_STUDENTS];

    // Input exam 1 scores
    for (int i = 0; i < NUM_STUDENTS; i++){
        printf("Input Exam 1 score for student %d : ", i);
        scanf("%d", &Exam1[i]);     // Do not forget to indicate the index in the arrray!!!
    }
    printf("\n");

    // Input Exam 2 scores
    for (int i = 0; i < NUM_STUDENTS; i++){     // Do not forget initialize!!
        printf("Input Exam 2 score for student %d : ", i);
        scanf("%d", &Exam2[i]);     // Do not forget the index's array
    }
    printf("\n");

    // Calculate Total Points
    for (int i = 0; i < NUM_STUDENTS; i++){
        Total[i] = Exam1[i] + Exam2[i];
    }

    // Output the Total Points
    for (int i = 0; i < NUM_STUDENTS; i++){
        printf("Total for Student %d = %d\n", i, Total[i]);
    }

}
