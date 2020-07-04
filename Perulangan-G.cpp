#include <iostream>
using namespace std;
int main() {
    int am,max=-100001,min=100001,input;
    cin>>am;
    if(cin.fail() || !(1<=am && am<=100))return 0;
    cin.clear();
    for(int i=0;i<am;i++){
        cin>>input;
        if(cin.fail() || !(-100000<=input && input<=100000))return 0;
        if(input>max)max=input;
        if(input<min)min=input;
    }printf("%i %i\n",max,min);
    return 0;
}
