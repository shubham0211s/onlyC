#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int number;
    int temp;
    printf("enter your number: ");
    scanf("%d", &number);
    {
        for (int i = 1; i <= number; i++)

        {
            temp = a;
            a = b;
            b = temp + a;
            printf("%d ", temp);
        }
    }
    {
        return 0;
    }
}
