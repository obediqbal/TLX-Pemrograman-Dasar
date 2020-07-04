#include <iostream>
using namespace std;
int main() {
    int input;
    cin>>input;
    if(cin.fail() || !(1<=input && input<=1000000))return 0;
    for(int i=input;i>=1;i--){
        if(input%i==0)printf("%i\n",i);
    }
    return 0;
}
