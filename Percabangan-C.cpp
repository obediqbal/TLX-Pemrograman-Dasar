#include <iostream>

int main() {
    int N;
    std::cin>>N;
    if(N>0 && N<=100000 && !std::cin.fail() && N%2==0){
        std::cout<<N<<std::endl;
    }
}
