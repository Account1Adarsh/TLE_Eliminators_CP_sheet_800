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
        set<int> s;
        int p=0;
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
            p=arr[i];
            s.insert(p);
        }
        int x=s.size();
        if(x>2) cout<<"No"<<endl;
        else if(x==1) cout<<"Yes"<<endl;
        else{
            int a=arr[0];
            int c=0;
            for(int i=0;i<n;i++){
                if(arr[i]==a) c++;
            }
            if(n%2==0) {
                if(c==n/2) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else{
                int k=abs(2*c-n);
                if(k==1) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
