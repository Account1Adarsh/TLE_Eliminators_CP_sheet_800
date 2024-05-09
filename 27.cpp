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
        int k=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2) k++;
        }
        int res=0;
        int r=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                res++;
                if(res==k-res){
                    r=i;
                    break;
                }
            }
        }
        if(k==0) cout<<1<<endl;
        else if(r>=0)cout<<r+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}