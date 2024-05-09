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
        int arr[n];
        int c=0;
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
            if(arr[i]==k){
                c++;
            }
        }
        if(c>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
