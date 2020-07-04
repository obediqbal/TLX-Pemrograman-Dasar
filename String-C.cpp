#include <iostream>
#include <string>
using namespace std;
void enkripsi(string &s,int k){
    int length=s.length();
    for(int i=0;i<length;i++){
        s[i]-='a';
        s[i]=(s[i]+k)%26;
        s[i]+='a';
    }
}
bool batas(string s){
    int length=s.length();
    if(length>100||length<1)return false;
    for(int i=0;i<length;i++){
        if(!(s[i]>='a'&&s[i]<='z'))return false;
    }return true;
}
int main() {
    string s;
    int k;
    cin>>s>>k;
    if(!(batas(s)&&1<=k&&k<=25))return 0;

    enkripsi(s,k);
    printf("%s\n",s.c_str());
    return 0;
}
