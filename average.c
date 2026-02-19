#include <stdio.h>

int main(){
int i=1;
int sum=0;
int Total = 0;
float avg;

while (i<=10){
    printf("Your number: %d\n",i);
    sum +=i;
    i++;
    Total +=1;
    
}
avg = (float ) sum/Total;
    printf("Total SUM: %d\n",sum);
    printf("AVERAGE: %.1f",avg);
}