#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    cin>>input;

    if(input>0 && input <=100000 && !cin.fail()){
        cout<<input<<endl;
    }

    return 0;
}
