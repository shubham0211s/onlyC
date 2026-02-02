// #include <stdio.h>
// int main()
// {
//     printf(5 + "ABCDEQuiz");
//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int x;
//     printf("Enter your number:" );
//     scanf("%d",&x);
//     printf("Your number is %d",x);

//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     char x[5];
//     printf("Enter your number:" );
//     scanf("%4s",x);
//     printf("Your number is %s",x);

//     return 0;

// }

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nResults:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    return 0;
}
