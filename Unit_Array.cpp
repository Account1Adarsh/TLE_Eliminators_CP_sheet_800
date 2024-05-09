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
        int nev=0;
        int pos=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==-1) nev++;
            else pos++;
        } 
        if(pos>=nev){
            if(nev%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
           if(nev%2==0){
                int c=0;
                while(nev>pos and nev){
                    c+=2;
                    nev-=2;
                    pos+=2;
                }
                cout<<c<<endl;
           }
           else{
                int c=1;
                nev--;
                pos++;
                while(nev>pos and nev){
                    c+=2;
                    nev-=2;
                    pos+=2;
            }
            cout<<c<<endl;
           }
        }
    }
    return 0;
}
