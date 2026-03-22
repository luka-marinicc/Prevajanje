#include <stdio.h>

int add(int a, int b);

#define PI 3.14
int main()
{
#ifdef DEBUG
    printf("Debug mode\n");
    printf("Extra diagnostic output\n");
#else
    printf("Normal mode\n");
#endif
    int result = add(3, 4);
    printf("Result: %d\n", result);
    printf("PI = %.2f\n", PI);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}