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
    ll dir[n+5];
    for(ll i=0;i<n;i++){
        char a;
        cin>>a;
        if(a=='R') dir[i]=0;
        else dir[i]=1;
    }
    set<ll> l,r;
    ll ans=LONG_MAX;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        if(dir[i]) l.insert(a);
        else r.insert(a);
    }
    for(auto i:r){
            auto j=l.lower_bound(i);
            if(j!=l.end()) ans=min(ans,abs(*j-i)/2);
    }
    if(ans==LONG_MAX) ans=-1;
    cout<<ans<<endl;
}

int main(){
    solve();
}
