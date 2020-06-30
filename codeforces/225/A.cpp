#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll found=1;
    ll n,top;
    cin>>n>>top;
    for(ll i=0;i<n;i++){
        ll bottom=7-top;
        ll l,r;
        cin>>l>>r;
        if(l!=bottom&&r!=bottom&&7-l!=bottom&&7-r!=bottom) continue;
        else found=0;
    }
    if(found) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    solve();
}
