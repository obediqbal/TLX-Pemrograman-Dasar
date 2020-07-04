#include <iostream>
using namespace std;
int main() {
    int max;
    cin>>max;
    if(cin.fail() || !(1<=max && max<=100))return 0;
    for(int i=0;i<max;i++){
        for(int j=max-1;j>=0;j--){
            if(j<=i)printf("*");
            else printf(" ");
            if(j==0)printf("\n");
        }
    }
    return 0;
}
