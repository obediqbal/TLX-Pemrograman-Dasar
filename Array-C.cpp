#include <iostream>

int main() {
    long n;
    scanf("%d",&n);
    int a[n];
    int count[1001];
    for(int i=0;i<1001;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    int max=0;
    int angka;
    for(int i=1000;i>=0;i--){
        if(count[i]>max){
            max=count[i];
            angka=i;
        }
    }
    printf("%d\n",angka);
    return 0;
}
