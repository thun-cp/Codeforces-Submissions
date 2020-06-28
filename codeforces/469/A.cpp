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
    ll p;
    cin>>p;
    ll arr[n+1];
    for(ll i=0;i<=n;i++) arr[i]=0;
    for(ll i=0;i<p;i++){
        ll a;
        cin>>a;
        arr[a]=1;
    }
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll a;
        cin>>a;
        arr[a]=1;
    }
    ll ans=1;
    for(ll i=1;i<=n;i++) if(!arr[i]) ans=0;
    if(ans) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}

int main(){
    solve();
}
