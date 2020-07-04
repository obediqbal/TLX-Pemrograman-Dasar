#include <iostream>
int a,b;
int abso(int x){
    if(x<0)return -x;
    else return x;
}
int fungsi(int count,int x){
    if(count==0)return x;
    int temp=abso(a*x+b);
    return fungsi(count-1,temp);
}
bool batas(int k){
    if(-5<=k&&k<=5)return true;
    return false;
}
int main() {
    int k,x;
    int hasil=0;
    scanf("%d %d %d %d",&a,&b,&k,&x);
    if(!(batas(a)&&batas(b)&&batas(x)&&1<=k&&k<=5))return 0;
    printf("%d\n",fungsi(k,x));
    return 0;
}
