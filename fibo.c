#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int Number;
    int temp;
    printf("enter your number: ");
    scanf("%d", &Number);
    {
        for (int i = 1; i <= Number; i++)

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
