#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        int k=s.size();
        k--;
        int p=pow(10,k);
        int res=k*9+n/p;
        cout<<res<<endl;

    }
    return 0;
}