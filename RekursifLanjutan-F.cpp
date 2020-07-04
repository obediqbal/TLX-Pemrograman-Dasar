#include <iostream>
#include <string>
using namespace std;
int m[128][128];
string catat[128*128];
int pangkat(int a){
    int count=0;
    while(1<a){
        a/=2;
        count++;
    }return count;
}
bool batas;
bool homogen(int r,int c,int k){
    for(int i=r;i<r+k;i++){
        for(int j=c;j<c+k;j++){
            if(m[i][j]!=m[r][c])return false;
        }
    }return true;
}
//k==0
void dekode(int r,int c,int k, string s){
    s.erase(0,1);
    if(k==0){
        batas=true;
        return;
    }
    if(s.length()==0){
        if(homogen(r,c,k)){
            for(int i=r;i<r+k;i++){
                for(int j=c;j<c+k;j++){
                    m[i][j]=1;
                }
            }
        }
        else{
            batas=true;
            return;
        }
    }
    else{
        if(s.at(0)=='0'){
            dekode(r,c,k/2,s);
        }else if(s.at(0)=='1'){
            dekode(r,c+k/2,k/2,s);
        }else if(s.at(0)=='2'){
            dekode(r+k/2,c,k/2,s);
        }else if(s.at(0)=='3'){
            dekode(r+k/2,c+k/2,k/2,s);
        }
    }
}

int pow(int max){
    int pow2=1;
    while(pow2<max){
        pow2*=2;
    }
    return pow2;
}

int main() {
    int count,r,c;
    scanf("%d",&count);
    if(!(count<=128*128&&count>=0))return 0;
    for(int i=0;i<count;i++){
        cin>>catat[i];
    }
    scanf("%d%d",&r,&c);
    if(!(2<=r&&r<=128&&2<=c&&c<=128))return 0;
    int maks=pow(max(r,c));

    for(int i=0;i<maks;i++){
        for(int j=0;j<maks;j++){
            m[i][j]=0;
        }
    }
    int ndiv=pangkat(maks);

    for(int i=0;i<count;i++){
        if(catat[i].length()-1>ndiv)return 0;
        dekode(0,0,maks,catat[i]);
        if(batas)return 0;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",m[i][j]);
            if(j!=c-1)printf(" ");
        }printf("\n");
    }

    return 0;
}
