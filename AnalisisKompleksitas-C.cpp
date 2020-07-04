#include <iostream>
using namespace std;

int main() {
    int count=0,n;
    cin>>n;
    if(cin.fail() || !(1<=n && n<=1000))return 0;

    int input[n];
    for(int i=0;i<n;i++){   //input
        scanf("%i",&input[i]);
        if(!(1<=input[i] && input[i]<=1000000))return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=input[i];j++){
            if(input[i]%j==0)count++;
            if(count*2>2)break;
        }
        if(count*2>2)printf("BUKAN\n");
        else printf("YA\n");
        count=0;
    }
    return 0;
}
