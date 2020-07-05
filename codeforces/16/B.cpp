#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
#define f first
#define s second
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> vec;
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        vec.pb({b,a});
    }
    sort(vec.begin(),vec.end(),greater<pair<ll,ll>>());
    ll bx=0,mx=0;
    for(ll i=0;i<m;i++){
        pair<ll,ll> cont=vec[i];
        if(bx+cont.s<=n){
            bx+=cont.s;
            mx+=cont.f*cont.s;
        }else{
            mx+=cont.f*(n-bx);
            bx+=(n-bx);
            break;
        }
    }
    cout<<mx<<endl;
}

int main(){
    solve();
}
