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
        string s;
        cin>>s;
        int res=0;
        int count=0;
        for(int i=0;i<n;i++){
            count=0;
            while(s[i]!='#' and i<n){
                count++;
                i++;
            }
            if(count==2) res+=2;
            else if(count>2) {
                res=2;
                break;
            }
            else res+=count;
        }
        cout<<res<<endl;
    }
    return 0;
}
