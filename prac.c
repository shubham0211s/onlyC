// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, num, power, temp, temp2, total, digit, adder;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &num);
//         power = 0;
//         temp = num;
//         total = 0;
//         while (temp > 0)
//         {
//             temp = temp / 10;
//             power++;
//         }
//         temp2 = num;
//         while (temp2 > 0)
//         {
//             digit = temp2 % 10;
//             total = total + pow(digit, power);
//             temp2 = temp2 / 10;
//         }

//         if (total == num)
//         {
//             printf("YES IT IS\n");
//         }
//         else
//         {
//             printf("NO IT IS NOT\n");
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int year;
//     scanf("%d",&year);
//     if((year%4==0 && year %100 !=0)|| year %400 == 0){
//         printf("IT IS A LEAP YEAR");
//     }
//     else{
//         printf("IT IS NOT");
//     }
//     return 0;
// }

#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(isalpha(a)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}