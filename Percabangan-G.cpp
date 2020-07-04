#include <iostream>

int main() {
    int x1,x2,y1,y2;
    int absis,ordinat;
    std::cin>>x1>>y1>>x2>>y2;

    if(!(-100000<=x1&&x1<=100000
    &&-100000<=x2&&x2<=100000
    &&-100000<=y1&&y1<=100000
    &&-100000<=y2&y2<=100000))return 0;

    absis=x1-x2;
    ordinat=y1-y2;

    if(absis<0){
        absis=absis*-1;
    }if(ordinat<0){
        ordinat=ordinat*-1;
    }printf("%d\n",absis+ordinat);
    return 0;
}
