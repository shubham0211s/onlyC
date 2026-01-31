#include <stdio.h>
int main()
{   int a = 12; 
int b = 15;
int c = 11;
if (a>b && a>c)
{
printf("greatest number is a: %d",a);
}
else if (b>a && b>c)

{
printf("greatest number is b: %d",b);
}
else
{
printf("greatest number is c: %d",c);
}

}