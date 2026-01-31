#include <stdio.h>

char main()
{
    char letter;
    printf("Enter the value of letter: ");
    scanf("%c", &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        printf("the entered character %c is a vowel", letter);
    else
        printf("It is a consonant");
}
