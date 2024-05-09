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
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        // if(arr[0]==1) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        (arr[0]==1)?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}
