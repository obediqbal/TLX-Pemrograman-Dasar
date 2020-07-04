#include <iostream>

int main() {
    int N;
    std::cin>>N;
    if(!std::cin.fail() && 1<=N && N<=100000){
        if(N<10){
            printf("satuan\n");
        }else if(N<100){
            printf("puluhan\n");
        }else if(N<1000){
            printf("ratusan\n");
        }else if(N<10000){
            printf("ribuan\n");
        }else if(N<100000){
            printf("puluhribuan\n");
        }
    }
    return 0;
}
