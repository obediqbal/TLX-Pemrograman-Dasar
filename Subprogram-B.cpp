#include <iostream>
int n,t,x,y;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main() {
    scanf("%d",&n);
    if(!(1<=n&&n<=1000))return 0;
    int arr[2][n+1];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(!(1<=arr[i][j]&&arr[i][j]<=100000))return 0;
        }
    }
    scanf("%i",&t);
    if(!(1<=t&&t<=1000))return 0;
    for(int i=0;i<t;i++){
        char b1[5],b2[5];
        scanf("%s %d %s %d",b1,&x,b2,&y);
        if(!(1<=x&&x<=n&&1<=y&&y<=n))return 0;
        if(!(b1[0]=='A' || b1[0]=='B') || !(b2[0]=='A' || b2[0]=='B'))return 0;
        int p=b1[0]-'A';
        int q=b2[0]-'A';
        x--;y--;
        swap(arr[p][x],arr[q][y]);
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
            if(j!=n-1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
