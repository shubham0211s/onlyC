#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int position;
    printf("Enter position to be deleted ");
    scanf("%d",&position);
    for(int i = position ;i<size;i++){
        arr[i] = arr[i+1];
    }
size --;
printf("Array after deletion:");
for(int i = 0; i<size;i++){
printf("%d ",arr[i]);}
}