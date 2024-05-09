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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int temp[2*n];
        for(int i=0;i<2*n;i++) temp[i]=-1;
        for(int i=0;i<n;i++){
            temp[2*i]=arr[i];
        }
        vector<int> v;
        n*=2;
        n--;
        for(int i=0;i<n;i++){
            if(temp[i]!=-1) v.push_back(temp[i]);
            else{
                int prev=temp[i-1];
                int next=temp[i+1];
                if(prev>next){
                    v.push_back(next);
                }
                else{
                    continue;
                }
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
