#include <iostream>
#include <string>
using namespace std;

string bin(int n){
    if(n==1){
        return "1";
    }else if(n%2==1){
        return bin(n/2)+"1";
    }else{
        return bin(n/2)+"0";
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if(!(1<=n&&n<=1000000000))return 0;
    printf("%s\n",bin(n).c_str());
    return 0;
}
