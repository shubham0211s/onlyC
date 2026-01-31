#include <stdio.h>

int main()
{
    int x = -5;

    if (x < 0)
    {
        printf("Invalid input\n");
        return 1;   // error exit
    }

    printf("Valid input\n");
    return 0;       // success exit
}
