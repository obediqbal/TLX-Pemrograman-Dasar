#include <iostream>
using namespace std;

int main() {
    int input, sum=0,count=0;
    bool eof=false;
    while(cin>>input){
        if(!(1<=input&&input<=1000))return 0;
        sum+=input;
        count++;
        if(count==100) { eof=true;break;}
    }if(!cin.eof() && eof==false)return 0;
    printf("%i\n",sum);

}
