#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll arr[n+5];
        for(ll i=0;i<n;i++) cin>>arr[i];
        set<ll> s(arr,arr+n);
        vector<ll> vec(s.begin(),s.end());
        ll c=0;
        ll last=1;
        for(ll i=0;i<vec.size();i++){
            if(vec[i]==last){
                c++;
                last++;
            }else{
                for(;last<vec[i] && x>0;last++){
                c++;
                x--;
            }
                if(last==vec[i]){
                        c++;
                        last++;
                }
            }
            //cout<<vec[i]<<' '<<last<<endl;
        }
        while(x>0){
                c++;
                x--;
        }
        cout<<c<<endl;
    }
}
