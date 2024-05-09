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
        int x=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            x^=arr[i];
        }
        if(n%2==0){
            if(x==0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}