#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,x;
    cin>>n>>x;
    ll ans=0;
    for(ll i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='+'){
            ll b;
            cin>>b;
            x+=b;
        }else{
            ll b;
            cin>>b;
            if(x>=b) x-=b;
            else ans++;
        }
    }
    cout<<x<<' '<<ans<<endl;
}

int main(){
    solve();
}
