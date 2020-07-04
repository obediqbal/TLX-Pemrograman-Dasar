#include <iostream>
#include <string>
using namespace std;

bool kecil(char c){
    return c >= 'a' && c <= 'z';
}
void rubah(string &s){
    int length=s.length();
    for(int i=0;i<length;i++){
        if(kecil(s[i])){
            s[i]=s[i]-'a'+'A';
        }else{
            s[i]=s[i]-'A'+'a';
        }
    }
}
bool batas(string s){
    int length=s.length();
    if(length>100||length<1)return false;
    for(int i=0;i<length;i++){
        if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))return false;
    }return true;
}
int main() {
    string s;
    cin>>s;
    if(!batas(s))return 0;
    rubah(s);
    printf("%s\n",s.c_str());

    return 0;
}
