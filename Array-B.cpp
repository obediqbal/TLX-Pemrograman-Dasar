#include <iostream>
using namespace std;

int main() {
    int n[100];
    int i=0;
    while(scanf("%i",&n[i])!=EOF) {
        if(!(1<=n[i] && n[i]<=100000) || i>=100)return 0;
        i++;
    }
    i--;
    while(i>=0){
        printf("%i\n",n[i]);
        i--;
    }
    return 0;
}
