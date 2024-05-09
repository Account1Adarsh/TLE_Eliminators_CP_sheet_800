#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n+1];
        
        for(int i=0;i<n;i++) cin>>arr[i];

        int temp[n+1];
        for(int i=0;i<=n;i++){
            if(i==0){
                temp[i]=arr[i];
            }
            else{
                temp[i]=arr[i]-arr[i-1];
            }
        }
        int res=2*(k-arr[n-1]);
        for(int i=0;i<n;i++){
            res=max(res,temp[i]);
        }
        cout<<res<<endl;

    }
    return 0;
}
