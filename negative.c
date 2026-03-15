#include <stdio.h>
#define size 5
int main() {
int arr[size];
for(int i = 0;i<size;i++){
    printf("Enter: ");
    scanf("%d",&arr[i]);
}
for (int i = 0;i<size;i++){
    if (arr[i]<0){
        printf("%d",arr[i]);
    }
}
}