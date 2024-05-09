#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b<=d){
            int k=a+d-b-c;
            if(k>=0){
                cout<<d-b+k<<endl;
            }
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}