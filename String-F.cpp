#include <iostream>
#include <string>
using namespace std;

bool isSnake(string s){
    return s.find('_') != -1;
}
bool isCamel(string s){
    for(int i=0;i<26;i++){
        if(s.find(i+'A')!=-1)return true;
    }return false;
}
bool batas(string s){
    if(!(s[0]>='a'&&s[0]<='z'))return false;
    if(s.length()<1||s.length()>100)return false;
    if(isSnake(s)&&isCamel(s))return false;
    return true;
}
void snake(string &s){
    int index;
    int count;
    index=s.find('_');
    while(s[index]=='_'){
        s.erase(index,1);
    }
    s[index]=s[index]-'a'+'A';
}
void camel(string &s){
    int index;
    for(int i=0;i<26;i++){
        index=s.find(i+'A');
        if(index!=-1){
            s[index]=s[index]-'A'+'a';
            s.insert(index,"_");
        }
    }
}
int main() {
    string s;
    cin>>s;
    if(!batas(s))return 0;

    if(isSnake(s)){
        while(isSnake(s)){
            snake(s);
        }
    }else{
        while(isCamel(s)){
            camel(s);
        }
    }
    printf("%s\n",s.c_str());

}
