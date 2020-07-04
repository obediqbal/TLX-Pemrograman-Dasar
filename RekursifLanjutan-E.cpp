#include <iostream>
using namespace std;

int m[128][128];
string catat[128*128];
int count=0;
bool homogen(int r,int c, int k){
    int val=m[r][c];
    for(int i=r;i<r+k;i++){
        for(int j=c;j<c+k;j++){
            if(val!=m[i][j])return false;
        }
    }return true;
}
void quadtree(int r,int c,int k, string s){
    if(homogen(r,c,k)){
        if(m[r][c]==1) {
            catat[count] = "1" + s;
            count++;
        }
    }else{
        quadtree(r,c,k/2,s+"0");
        quadtree(r,c+(k/2),k/2,s+"1");
        quadtree(r+(k/2),c,k/2,s+"2");
        quadtree(r+(k/2),c+(k/2),k/2,s+"3");
    }

}
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int maxrc=max(r,c);
    int pow2=1;
    while(pow2<maxrc){
        pow2*=2;
    }
    //initialize
    for(int i=0;i<pow2;i++){
        for(int j=0;j<pow2;j++){
            m[i][j]=0;
        }
    }
    //read
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }
    quadtree(0,0,pow2,"");

    printf("%d\n",count);
    if(count!=0){
        for(int i=0;i<count;i++){
            printf("%s\n",catat[i].c_str());
        }
    }

    return 0;
}
