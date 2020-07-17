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
    vector<ll> arr;
    map<ll,ll> m;
    for(ll i=0;i<2*n;i++){
        ll a;
        cin>>a;
        if(!m[a]){
            m[a]=1;
            arr.pb(a);
        }
    }
    for(auto i:arr) cout<<i<<' ';
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
