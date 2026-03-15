#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5};
    int position,choice;
    int size = 5;
    
    printf("Enter your position number: ");
    scanf("%d",&position);
    printf("Enter your choice number: ");
    scanf("%d",&choice);

    for(int i = size; i > position;i--){
        arr[i]= arr[i-1];
    }

    arr[position]= choice;
    size++;

    for( int i=0; i<size;i++){
        printf("%d ",arr[i]);
    }
}