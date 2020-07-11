#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    if(is_sorted(arr,arr+n)) cout<<0<<endl;
    else{
        ll ans=1;
        ll f=-1,l=-1;
        set<ll> s;
        for(ll i=0;i<n;i++){
            if(arr[i]==i+1) s.insert(i);
            else{
                if(f==-1) f=i;
                l=i;
            }
        }
        ll mid=*s.upper_bound(f);
        if(mid>f&&mid<l) ans++;
        cout<<ans<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
