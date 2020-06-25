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
    map<ll,ll> m;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        m[a]++;
    }
    cout<<max(0*1ll,n-(*m.begin()).second-(*m.rbegin()).second)<<endl;
}

int main(){
    solve();
}
