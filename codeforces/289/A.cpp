#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ld n,k;
    cin>>n>>k;
    ld ans=0;
    for(ll i=0;i<n;i++){
        ll l,r;
        cin>>l>>r;
        ans+=(r-l+1);
    }
    cout<<ll(ceil(ans/k)*k-ans)<<endl;
}

int main(){
    solve();
}
