#include <stdio.h>

int main()
{
#ifdef DEBUG
    printf("Debug mode\n");
#else
    printf("Normal mode\n");
#endif
    return 0;
}