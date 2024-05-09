#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>n>>a>>b;
        if(n==a and a==b) cout<<"Yes"<<endl;
        else if(a+b<n){
            if(n-(a+b)>=2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;

    }
    return 0;
}

