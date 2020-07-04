#include <iostream>

int main() {
    int N;
    std::cin>>N;
    if(!std::cin.fail() && -100000<=N && N<=100000){
        if(N==0){
            printf("nol\n");
        }else if(N>0){
            printf("positif\n");
        }else if(N<0){
            printf("negatif\n");
        }
    }
    return 0;
}
