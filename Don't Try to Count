#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int count=0;
        int pos=-1;
        while(x.size()<=50){
            pos=x.find(s);
            if(pos==-1) x=x+x;
            else break;
            count++;
        }
        if(pos==-1) cout<<-1<<endl;
        else cout<<count<<endl;
    }
    return 0;
}
