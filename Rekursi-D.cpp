#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s){
    int length=s.length();
    if(length==1 || length==2){
        if(s[length-1]==s[0]){
            return true;
        }else return false;
    }
    string sub=s.substr(1,length-2);
    return (s[0]==s[length-1]) && palindrome(sub);
}
bool batas(string s){
    int length=s.length();
    if(length<1||length>100)return false;
    for(int i=0;i<length;i++){
        if(!(s[i]>='a'&&s[i]<='z'))return false;
    }return true;
}
int main() {
    string s;
    cin>>s;
    if(!batas(s))return 0;
    if(palindrome(s)){
        printf("YA\n");
    }else{
        printf("BUKAN\n");
    }
    return 0;
}
