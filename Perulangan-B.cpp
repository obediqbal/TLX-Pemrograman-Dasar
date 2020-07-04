#include <iostream>

int main() {
    int n,num;
    int sum=0;
    scanf("%i",&n);
    if(n==0 || !(1<=n&&n<=1000))return 0;
    for(int i=0;i<n;i++){
        scanf("%i",&num);
        if(!(1<=num&&num<=1000))return 0;
        sum+=num;
    }
    printf("%i\n",sum);
    return 0;
}
