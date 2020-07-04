#include <iostream>

using namespace std;

int main() {
    int N,M;
    scanf("%i %i", &N,&M);
    if(1<=N&&N<=100000&&1<=M&&M<=100000){
    printf("masing-masing %d\nbersisa %d\n",N/M,N%M);}
    return 0;
}
