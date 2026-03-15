#include <stdio.h>
#define rows 3
#define cols 4
#define Y 4
void buildarray(int a[][Y],int row, int col);


int main(){
int ar1[3][Y];
int ar2[3][Y];
int new[3][Y];
int i,j;
buildarray(ar1,3,4);
printarray(ar1,3,4);
}

void buildarray(int a[][Y],int row, int col){
    for(int x = 0;x < row; x++){
        for(int y = 0; y< col;y++){
            scanf("%d",&a[x][y]);
        }
    }
}
void printarray(int a[][Y],int row, int col){
    for(int x = 0;x < row; x++){
        for(int y = 0; y< col;y++){
            printf("%d",a[x][y]);
        }
    }
}