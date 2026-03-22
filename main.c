#include <stdio.h>

int main()
{
#ifdef DEBUG
    printf("Debug mode\n");
    printf("Extra diagnostic output\n");
#else
    printf("Normal mode\n");
#endif
    return 0;
}