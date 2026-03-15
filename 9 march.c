// #include <stdio.h>
// int main(){
//     int len;
//     char arr[100];
//     printf("Enter the string: ");
//     fgets(arr,10,stdin);
//     printf("%s",arr);
//     for(len =0;arr[len]!='\0';len++);
    
//     printf("length of string with null CHARACTER is: %d",len);
//     return 0;
// }

// #include <stdio.h>

// int main(){ 
//         char str[50];
//         printf("Enter the string: ");
//     fgets(str,sizeof(str),stdin);
//     touppercase(str);
//     printf("uppercase: %s",str);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[] = "Hello, World!";
//     int length = strlen(str);
//     printf("Length: %d\n",length);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[15];
//  fgets(str,sizeof(str),stdin);
//     int length = strlen(str);
//     printf("Length: %d\n",length);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main(){
    char dest[20] = "Hello! ";
    char src[] = "world!!! ";
    strcat(dest,src);
printf("%s", dest);
    return 0;
}