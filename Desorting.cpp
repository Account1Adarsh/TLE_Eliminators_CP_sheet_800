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
        int res=INT_MAX;
        for(int i=1;i<n;i++){
            res=min(res,arr[i]-arr[i-1]);
        }
        if(res<0) cout<<0<<endl;
        else cout<<(res/2)+1<<endl;
    }
    return 0;
}
