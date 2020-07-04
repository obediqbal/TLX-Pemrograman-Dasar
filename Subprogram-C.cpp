#include <iostream>

int reverse(int x){
    int temp=x;
    int ret=0;

    while(temp>0){
        ret=ret*10+(temp%10);
        temp/=10;
    }
    return ret;
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(!(1<=a&&a<=1000000&&1<=b&&b<=1000000))return 0;
    printf("%d\n",reverse(reverse(a)+reverse(b)));

}
