#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            if(c%2==1){
                cout<<"First"<<endl;
            }
            else cout<<"Second"<<endl;
        }
        else{
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
    return 0;
}
