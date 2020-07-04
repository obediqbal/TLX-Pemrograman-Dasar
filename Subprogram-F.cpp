#include <iostream>
int d;
struct jar{
    int x,y;
};
int pow(int a,int d){
    int ret=1;
    for(int i=0;i<d;i++){
        ret=ret*a;
    }return ret;
}int abso(int x){
    if(x<0)return -x;
    return x;
}
int t(jar a, jar b){
    return pow(abso(a.x-b.x),d)+pow(abso(a.y-b.y),d);
}
int main() {
    int n;
    int max=-1,min=2000001;
    scanf("%d %d",&n,&d);
    if(!(2<=n&&n<=1000&&1<=d&&d<=3))return 0;
    jar m[n];

    for(int i=0;i<n;i++){ //baca
        scanf("%d %d",&m[i].x,&m[i].y);
        if(!(0<=m[i].x&&m[i].x<=100&&0<=m[i].y&&m[i].y<=100))return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(t(m[i],m[j])>=max){
                max=t(m[i],m[j]);
            }
            if(t(m[i],m[j])<=min){
                min=t(m[i],m[j]);
            }
        }
    }
    printf("%d %d\n",min,max);

    return 0;
}
