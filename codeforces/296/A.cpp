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
    ll found=1;
    for(auto i:m){
        if(i.second>ceil(n/2.0)) found=0;
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
}
