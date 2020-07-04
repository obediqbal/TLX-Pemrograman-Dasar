#include <iostream>
int m,n,b,k;
int count=0;
int jaw[25][25];
bool visited[25][25];
class koma{
public :int a,b;
};
struct titik{
  int x,y;
};
titik e,r;
koma q,w;
void lanjut(int x,int y,int bil);

void periksa(int x,int y, int bil){
    if(0<=x&&x<m&&0<=y&&y<n){
        if(jaw[x][y]==bil){
            if(!visited[x][y]){
                visited[x][y]=true;
                count++;
                lanjut(x,y,bil);
            }
        }
    }
}
void lanjut(int x,int y, int bil){
    periksa(x+1,y,bil);
    periksa(x-1,y,bil);
    periksa(x,y+1,bil);
    periksa(x,y-1,bil);
}

int main() {
    scanf("%d%d",&m,&n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&jaw[i][j]);

        }
    }
    scanf("%d%d",&b,&k);

    int bil=jaw[b][k];
    periksa(b,k,bil);
    printf("%d\n",count*(count-1));

    q.a=5;
    e.x=4;



    return 0;
}
