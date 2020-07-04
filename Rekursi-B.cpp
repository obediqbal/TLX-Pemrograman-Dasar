#include <iostream>
int faktorial(int n){
    if(n==1){
        return 1;
    }else if(n%2==0){
        return n/2*faktorial(n-1);
    }else{
        return n*faktorial(n-1);
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if(!(1<=n&&n<=10))return 0;
    printf("%d\n",faktorial(n));
    return 0;
}
