#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    ll last,ans=1;
    cin>>last;
    for(ll i=1;i<n;i++){
        ll a;
        cin>>a;
        if(last!=a) ans++;
        last=a;
    }
    cout<<ans;
}

int main(){
    solve();
}
