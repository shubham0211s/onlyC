#include <stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int size,position,choice;
    size = 5;
    printf("Position No. ");
    scanf("%d",&position);
    printf("Choice number to be inserted: ");
    scanf("%d",&choice);
for ( int i = size; i > position;i--){
    arr[i]= arr[i-1];
}
arr[position]= choice;
size ++;                  //IMPORTANT FOR SIZE INCREASING

for (int i= 0;i<size;i++){
    printf("%d ",arr[i]);
}
}