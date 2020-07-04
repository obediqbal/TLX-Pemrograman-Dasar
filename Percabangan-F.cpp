#include <iostream>

int main() {
    float N;
    int floor,ceiling;
    std::cin>>N;
    if(std::cin.fail() || !(-100000<=N && N<=100000))return 0;

    if((int)N==N){
        floor=N;
        ceiling=N;
    }else{
        if(N<0){
            floor=N-1;
            ceiling=N;
        }else{
            floor=N;
            ceiling=N+1;
        }
    }
    printf("%d %d\n",floor, ceiling);

    return 0;
}
