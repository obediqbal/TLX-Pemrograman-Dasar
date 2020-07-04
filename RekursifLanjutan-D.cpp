#include <iostream>
//1...n bilangan
//k kombinasi
//nCk
int n,k;
int catat[9];
void tulis(int kedalaman){
    if(kedalaman>=k){
        //cetak
        for(int i=0;i<k;i++){
            printf("%d",catat[i]);
            if(i<k-1)printf(" ");
            else printf("\n");
        }
    }else{
        //catat
        for(int i=catat[kedalaman-1]+1;i<=n;i++){
            catat[kedalaman] = i;
            tulis(kedalaman + 1);
        }
    }
}
int main() {
    scanf("%d %d",&n,&k);
    if(!(n<=9&&1<=k&&k<=n))return 0;
    tulis(0);
    return 0;
}
