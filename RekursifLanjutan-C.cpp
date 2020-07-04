#include <iostream>

int catat[9];
bool pernah[9];
bool c1,c2;
bool zigzag;
int n;

void tulis(int kedalaman){
    if(kedalaman>=n){
        zigzag=true;
        for(int i=1;i<n-1;i++){
            c1=catat[i]>catat[i-1]&&catat[i]>catat[i+1];
            c2=catat[i]<catat[i-1]&&catat[i]<catat[i+1];
            if(!(c1||c2))zigzag=false;
        }
        if(zigzag){
            for(int i=0;i<n;i++){
                printf("%d",catat[i]);
            }printf("\n");
        }
    }
    else{
        for(int i=1;i<=n;i++){
            if(!pernah[i]){
                catat[kedalaman]=i;
                pernah[i]=true;
                tulis(kedalaman+1);
                pernah[i]=false;
            }
        }
    }
}

int main() {
    scanf("%d",&n);
    if(!(1<=n&&n<=9))return 0;
    tulis(0);
    return 0;
}
