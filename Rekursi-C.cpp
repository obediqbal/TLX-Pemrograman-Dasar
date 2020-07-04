#include <iostream>
#include <math.h>
int a,b;
//f(x)=ax+b
//f(f(x))=f(ax+b)=a(ax+b)+b
int fungsi(int x,int k){
    if(k==0){
        return x;
    }else{
        return abs(a*fungsi(x,k-1)+b);
    }
}
bool batas(int x){
    if(!(-5<=x&&x<=5))return false;
    return true;
}
int main() {
    int x,k;
    scanf("%d %d %d %d",&a,&b,&k,&x);
    if(!(batas(a)&&batas(b)&&batas(x)&&1<=k&&k<=5))return 0;

    printf("%d\n",fungsi(x,k));
    return 0;
}
