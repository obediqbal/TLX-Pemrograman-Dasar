#include <iostream>
using namespace std;
int main() {
    int max,count=0;
    cin>>max;
    if(cin.fail() || !(1<=max && max<=100))return 0;

    for(int i=1;i<=max;i++){             //Amount of line
        for(int j=0;j<i;j++){        //Amount of column
            if(count==10)count=0;
            printf("%i",count);
            if(j==i-1)printf("\n");
            count++;
        }
    }

    return 0;
}
