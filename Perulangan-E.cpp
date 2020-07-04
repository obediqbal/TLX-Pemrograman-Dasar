#include <iostream>
#include <math.h>

int main() {
    int input;
    std::cin>>input;
    if(std::cin.fail() || !(1<=input && input<=pow(2,16)))return 0;
    while(input%2==0) {
        input=input/2;
    }
    if(input==1)printf("ya\n");
    else printf("bukan\n");
    return 0;
}
