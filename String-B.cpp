#include <iostream>
#include <string>
using namespace std;

bool ada(string s,string t){
    return s.find(t) != -1;
}
void buang(string &s,string t){
    int index=s.find(t);
    s.erase(index,t.length());
}
bool batas(string a){
    int length=a.length();
    if(length>100||length<1)return false;
    for(int i=0;i<length;i++){
        if(!(a[i]>='a' && a[i]<='z'))return false;
    }return true;
}
int main() {
    string s,t;
    cin>>s;
    if(!batas(s))return 0;
    cin>>t;
    if(!batas(t))return 0;

    while(ada(s,t)){
        buang(s,t);
    }
    printf("%s\n",s.c_str());

    return 0;
}
