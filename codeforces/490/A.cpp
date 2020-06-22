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
    vector<ll> vec[4];
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        vec[x].pb(i);
    }
    ll c=min(vec[1].size(),min(vec[2].size(),vec[3].size()));
    cout<<c<<endl;
    for(ll i=0;i<c;i++){
        cout<<vec[1][i]<<' '<<vec[2][i]<<' '<<vec[3][i]<<endl;
    }
}

int main(){
    solve();
}
