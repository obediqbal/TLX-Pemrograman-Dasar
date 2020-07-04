#include <iostream>

int main() {
    int row, column;
    scanf("%i %i",&row, &column);
    if(!(1<=row&&row<=100&&1<=column&&column<=100))return 0;
    int mat[row][column];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%i",&mat[i][j]);
            if(!(1<=mat[i][j]&&mat[i][j]<=100))return 0;
        }
    }
    for(int i=0;i<column;i++){
        for(int j=row-1;j>=0;j--){
            printf("%i",mat[j][i]);
            if(j!=0)printf(" ");
            else printf("\n");
        }
    }
    return 0;
}