// // This program reads up to 10 numbers entered by the user, then finds and prints the
// // greatest value, the lowest value, the sum, and the average. All logic is in a single main().

// #include <stdio.h>

// int main(){
//     int greatest,lowest,sum;
//     double average;
//     int arr[10];
//     greatest = -10000000;
//     lowest = 1000000;
//     for(int i = 0; i < 10;i++){
//         printf("Enter: ");
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i<10; i++){
//         if(lowest > arr[i]){
//             lowest = arr[i]; 
//         }
//     }
    // for (int i = 0 ; i < 10; i ++){
    //     if (greatest < arr[i]){
    //         greatest = arr[i];
    //     }

    // printf("%d",lowest);
// }printf("%d",greatest);
// }

// FOR FINDING THE SUM, AVERAGE
#include <stdio.h>

int main(){
    int sum;
    sum = 0;
    float avg;
    int size = 10;
    int arr[10];
    
    for(int i = 0; i < 10;i++){
        printf("Enter: ");
        scanf("%d",&arr[i]);
    }
for(int i = 0; i<10;i++){
    sum = sum + arr[i];
}
avg = (float) sum/size;
printf("%.2f\n",avg);
printf("%d",sum);
}
