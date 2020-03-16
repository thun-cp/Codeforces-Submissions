#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll ans=0;
    ll a1=0,b1=0,c1=0;
    for(ll i=0;i<=n/a;i++){
        for(ll j=0;j<=(n-i*a)/b;j++){
            ll z;
            if((n-i*a-j*b)%c==0){
                z=(n-i*a-j*b)/c;
                ans=max(ans,i+j+z);
            }
        }
    }
    cout<<ans;
}
