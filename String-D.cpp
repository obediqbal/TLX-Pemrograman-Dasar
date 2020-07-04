#include <iostream>
#include <string>
using namespace std;

bool batas(string a){
    int length=a.length();
    if(length>100 || length<1)return false;
    for(int i=0;i<length;i++){
        if(!(a[i]>='a' && a[i]<='z'))return false;
    }return true;
}
/*bool ada(string a,string b){
    int count=0;
    while(a.find(b)!=-1){
        a.erase(a.find(b),b.length());
        count++;
    }
    return count == 1;
}*/
void buang(string &a,string b){
    a.erase(a.find(b),b.length());
}
void sisip(string &a,string b,string c){
    a.insert(a.find(c)+c.length(),b);
}

int main() {
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    if(!(batas(s1)&&batas(s2)&&batas(s3)&&batas(s4)))return 0;

    buang(s1,s2);
    sisip(s1,s4,s3);
    printf("%s\n",s1.c_str());

    return 0;
}
