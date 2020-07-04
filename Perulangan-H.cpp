#include <iostream>
using namespace std;

int main() {
    int max,habis;
    cin>>max>>habis;
    if(cin.fail() || !(1<=max && max<=100) || !(1<=habis && habis<=max))return 0;
    for(int i=1;i<=max;i++){
        if(i%habis==0)printf("*");
        else printf("%i",i);

        if(i!=max)printf(" ");
        else printf("\n");
    }
    return 0;
}
