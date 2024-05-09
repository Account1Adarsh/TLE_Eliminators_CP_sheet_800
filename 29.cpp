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

        for(int i=0;i<n;i++) arr[i]%=2;
        int res=0;
        for(int i=0;i<n;){
            int z=0;
            int o=0;
            while(arr[i]==0 and i<n){
                z++;
                i++;
            }
            while(arr[i]==1 and i<n){
                o++;
                i++;
            }
            if(z>=2) res+=z-1;
            if(o>=2) res+=o-1;
        }
        cout<<res<<endl;
    }
    return 0;
}