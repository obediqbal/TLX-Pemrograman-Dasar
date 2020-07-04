#include <iostream>

bool isPrime(int x){
    if(x<2)return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return false;
    }return true;
}
int last(int n){
    for(int i=n/2;i>=2;i--){
        if(isPrime(i) && n%i==0)return i;
    }
}
int count(int x, int n){
    int k=0;
    while(n%x==0){
        k++;
        n=n/x;
    }
    return k;
}
int main() {
    int n;
    scanf("%d",&n);
    if(isPrime(n)){
        printf("%i\n",n);
        return 0;
    }
    if(!(2<=n&&n<=1000000))return 0;
    for(int i=2;i<=n/2;i++){
        if(!isPrime(i))continue;
        if(count(i,n)!=0){
            printf("%d",i);
            if(count(i,n)!=1)printf("^%d",count(i,n));
            if(i!=last(n))printf(" x ");
            else printf("\n");
        }
    }
    return 0;
}
