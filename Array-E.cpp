#include <iostream>
bool check(int arr){
    if(1<=arr && arr<=100) return true;
    else return false;
}
int main() {
    int n,m,p;
    scanf("%i %i %i",&n,&m,&p);
    if(!(check(n)&&check(m)&&check(p)))return 0;
    int mat1[n][m];
    int mat2[m][p];
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%i",&mat1[i][j]);
            if(!(check(mat1[i][j])))return 0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            scanf("%i",&mat2[i][j]);
            if(!(check(mat2[i][j])))return 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            for(int k=0;k<m;k++){
                temp=temp+mat1[i][k]*mat2[k][j];
            }
            printf("%i",temp);
            if(j==p-1){
                printf("\n");
            }else{
                printf(" ");
            }
            temp=0;
        }
    }
    return 0;
}
/*
1 1 1
1 1 2

1 1 1 1
1 1 1 1
1 1 1 2
 */
//1,1*1,1 + 1,2*2,1 + 1,3*3,1   (1,1)
//1,1*1,2 + 1,2*2,2 + 1,3*3,2   (1,2)