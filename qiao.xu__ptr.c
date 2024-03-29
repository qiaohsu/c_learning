#include <stdio.h>
#include <stdlib.h>

int main(){
    int m;
    int *m_pointer;

    // ex.1
    m = 200;
    printf("Ans1: m=%d at it is allocated at %p.\n", m, &m);
    printf("\n");


    // ex.2
    m_pointer = (int*)malloc(sizeof(int));
    printf("Ans2: m pointer is initially allocated at %p and its original content is %d.\n", &m_pointer, m_pointer);
    printf("\n");
    

    // ex.3
    printf("Ans3: try it yourself, it's not too difficult, beauty. ;)\n");
    printf("\n");


    // ex.4
    printf("Ans4: try it yourself, it's not too difficult, beauty. ;)\n");
    printf("\n");


    // ex.5
    char c_array[13] = "Hello World!";

    printf("Ans5: The c_array[13] is allocated at %p, and *c_array = %c\n", &c_array, *(c_array+0));
    printf("      c_array[0] = %p, c_array[1] = %p, c_array[2] = %p, c_array[3] = %p, c_array[4] = %p\n", &c_array[0], &c_array[1], &c_array[2], &c_array[3], &c_array[4]);
    printf("\n");


    // ex.6
    int *int_pointer = c_array;
    float *float_pointer = c_array;
    double *double_pointer = c_array;

    printf("Ans6: Now, int_pointer = %p, float_pointer = %p, double_pointer = %p\n", int_pointer, float_pointer, double_pointer);
    printf("      *c_array as a string = %s, *int_pointer = %d (0x%x)", int_pointer, *(int_pointer), *(int_pointer));
    printf(", *float_pointer = %f\n", *(float_pointer));
    printf("\n");


    // ex.7
    printf("Ans7: c_array + 1 = %p, int_pointer + 1 = %p, float_pointer + 1 = %p, double_pointer + 1 = %p\n", c_array+1, int_pointer+1, float_pointer+1, double_pointer+1);
    printf("The size of int = %d, the size of char = %d, the size of float = %d, the size of double = %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
    printf("Conclusion here ;) \n");
}