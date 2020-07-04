#include <iostream>
using namespace std;
int main() {
    int max;
    cin>>max;
    if(cin.fail() || !(1<=max && max<=50))return 0;
    for(int i=1;i<=max;i++){
        if(i%10==0)continue;
        if(i==42){
            printf("ERROR\n");
            break;
        }
        printf("%i\n",i);
    }
    return 0;
}
