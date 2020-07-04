#include <iostream>
#include <iomanip>

int main() {
    int A,T;
    scanf("%d %d",&A,&T);
    if(!(1<=A&&A<=1000&&1<=T&&T<=1000))return 0;
    float area=(float)A*T/2;
    printf("%.2f\n",area);
    return 0;
}
