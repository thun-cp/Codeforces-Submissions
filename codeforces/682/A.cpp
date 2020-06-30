#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,m;
    cin>>n>>m;
    map<ll,ll> f,s;
    for(ll i=1;i<=n;i++) f[i%5]++;
    for(ll j=1;j<=m;j++) s[j%5]++;
    ll ans=0;
    for(auto i:f) ans+=i.second*s[5-i.first];
    ans+=f[0]*s[0];
    cout<<ans<<endl;
}

int main(){
    solve();
}
