// VARIABLE LENGTH ARRAY IS NOT ALLOED // ARRAY SIZE == NO. OF ITEMS ARRAY HOLDS
// SIZE MORE INITIALISATION LESS TOH SB SAARI VALUES 0 HO JAYEGI
// SIZE LESS INIT MORE TOH WARNING AAYEGI
// NO VARIABLE LENGTH CAN  BE ASSIGNED



#include <stdio.h>

int main(){
    int arr[10];
    int len,i;
    int greatest = -10000000;
    int lowest = 10000000;
    int sum = 0;
    double average;
    printf("Enter the count of numbers(must be less than 10): ");
    scanf("%d",&len);
    if (len>10){
        printf("INVALID LENGTH");
        return 1;

    }
    for(i=0;i<len;i++) { printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<len;i++){
        sum += arr[i];
        if(greatest < arr[i]) greatest = arr[i];
        if(lowest > arr[i]) lowest = arr[i];

    }
    printf("Greatest = %d\nLowest = %d\n",greatest,lowest);
    printf("Sum of all elements = %d\n",sum);
    average = 1.0 * sum/len;
    printf("Average of all elements =%.2f\n",average);
    return 0;
}