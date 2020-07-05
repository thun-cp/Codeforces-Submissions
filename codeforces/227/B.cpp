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
    ll arr[n+1];
    for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            arr[a]=i+1;
    }
    ll m;
    cin>>m;
    ll ans1=0,ans2=0;
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        ans1+=arr[x];
        ans2+=n-arr[x]+1;
    }
    cout<<ans1<<' '<<ans2<<endl;
}

int main(){
    solve();
}
