#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    ll l=0,r=n;
    while(l<=r){
        ll mid=(l+r)/2;
        ll div=k;
        ll tans=mid;
        while(mid/div>0){
            tans+=mid/div;
            div*=k;
        }
        //cout<<mid<<' '<<tans<<endl;
        if(tans>=n){
            ans=mid;
            r=mid-1;
        }else l=mid+1;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
