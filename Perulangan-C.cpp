#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    char input[101];
    int line=0;
    string s[100];

    while(scanf("%s",input)!=EOF && line<100){
        s[line]=input;
        for(int i=0;i<s[line].length();i++){
            if(!(input[i]>=97 && input[i]<=122))return 0;
        }
        line++;
    }
    for(int i=0;i<line;i++){
        printf("%s\n",s[i].c_str());
    }
    return 0;
}
