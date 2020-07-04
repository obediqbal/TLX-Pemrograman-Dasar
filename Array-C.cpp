#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (!(1 <= n && n <= 100000) || cin.fail())return 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (!(1 <= arr[i] && arr[i] <= 1000) || cin.fail())return 0;
    }
    int count=0;
    int max=0;
    int num=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]&&arr[j]!=0){
                count++;
                arr[j]=0;
            }
        }
        if(count>max){
            max=count;
            num=arr[i];
        }else if(count==max && arr[i]>num){
            num=arr[i];
        }
        count=0;
    }
    printf("%i\n",num);
        return 0;
}