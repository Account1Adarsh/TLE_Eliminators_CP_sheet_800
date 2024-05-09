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
        int res[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            res[i]=n+1-arr[i];
        }
        for(int i=0;i<n;i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}