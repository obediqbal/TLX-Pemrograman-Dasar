#include <iostream>

int main() {
    int element[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%i",&element[i][j]);
            if(!(1<=element[i][j]&&element[i][j]<=100))return 0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%i",element[j][i]);
            if(j!=2)printf(" ");
            else printf("\n");
        }
    }
    return 0;
}
