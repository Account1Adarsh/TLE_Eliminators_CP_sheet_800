#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i<1||i>=10-1||j<1||j>=10-1){
                m[i][j]=1;
            }
            else if(i<2||i>=10-2||j<2||j>=10-2){
                m[i][j]=2;
            }
            else if(i<3||i>=10-3||j<3||j>=10-3){
                m[i][j]=3;
            }
            else if(i<4||i>=10-4||j<4||j>=10-4){
                m[i][j]=4;
            }
            else if(i<5||i>=10-5||j<5||j>=10-5){
                m[i][j]=5;
            }
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n=10;
        char a[10][10];
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j]=='X') res+=m[i][j];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
