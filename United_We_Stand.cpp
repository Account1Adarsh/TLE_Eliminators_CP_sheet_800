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
            int k;
            for(int i=0;i<n;i++){
                cin>>k;
                arr[i]=k;
                s.insert(k);
            }
            sort(arr,arr+n);
            vector<int> a;
            vector<int> b;
            if(s.size()>1){
                int j=0;
                while(arr[j]==arr[j+1]){
                    a.push_back(arr[j]);
                    j++;
                }
                a.push_back(arr[j]);
                j++;
                while(j<n){
                    b.push_back(arr[j]);
                    j++;
                }

                cout<<a.size()<<" "<<b.size()<<endl;;
                for(int i=0;i<a.size();i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
                for(int i=0;i<b.size();i++){
                    cout<<b[i]<<" ";
                }
                cout<<endl;
            }
            else cout<<-1<<endl;
        }
        return 0;
    }
