#include <stdio.h>
int main()

{
    int a;
    int b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int total;
    total = a+b;
    printf("The addition of two numbers is: %d",total);
    return 0;
}