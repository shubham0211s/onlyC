// #include <stdio.h>
// int main()
// {
// int n;
// int sum = 0;
// scanf("%d",&n);
// for (int i = 0; i<=n;i++){
//     if (i%2!=0){
//         sum +=i;
//     } 
    
// }
// printf("TOTAL:%d",sum);}


#include <stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum =0;
    if (a>b)
    {
       for(int i = b;i<=a;i++)
    {
        if(i%2!=0)
        {
            sum = sum+i;
        } 
    }}
    else{
    for(int i = a;i<=b;i++)
    {
        if(i%2!=0)
        {
            sum = sum+i;
        }
    }}

    printf("Total is equal to:%d",sum);
}