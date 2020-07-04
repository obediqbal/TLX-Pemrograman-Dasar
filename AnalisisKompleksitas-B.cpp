#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(cin.fail() || !(1<=n && n<=1000))return 0;
    bool bukan=false;
    int input[n];
    for(int i=0;i<n;i++){
        scanf("%i",&input[i]);
        if(!(1<=input[i] && input[i]<=1000000))return 0;
    }for (int i=0;i<n;i++){
        for(int j=2;j*j<=input[i];j++){
            if(input[i]%j==0) { bukan=true;break;}
        }
        if(bukan || input[i]==1)printf("BUKAN\n");
        else printf("YA\n");
        bukan=false;
    }
    return 0;
}
