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
        sort(arr,arr+n,greater<int>());
        if(arr[0]==arr[1]) swap(arr[0],arr[n-1]);
        bool flag=true;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum==arr[i]){
                flag=false;
                break;
            }
            sum+=arr[i];
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            cout<<endl;
        } 

    }
    return 0;
}