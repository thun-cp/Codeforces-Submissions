#include "bits/stdc++.h"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define endl '\n'
#define F first
#define S second
#define IO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define cf ll testcases;cin>>testcases;while(testcases--)
#define prn(x) if(x) cout<<"YES"<<endl; else cout<<"NO"<<endl;
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

void solve(){
    ll p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair<ll,ll>> x,y;
    for(ll i=0;i<p;i++){
        ll a,b;
        cin>>a>>b;
        x.pb({a,b});
    }
    for(ll i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        y.pb({a,b});
    }
    ll ans=0;
    for(ll i=l;i<=r;i++){
        ll found=0;
        for(auto j:y){
            ll c=j.first+i,d=j.second+i;
            if(found) break;
            for(auto k:x){
                if(found) break;
                ll a=k.first,b=k.second;
                if(a<=c&&b>=c) found=1;
                else if(a<=d&&b>=d) found=1;
                else if(a>=c&&b<=d) found=1;
            }
        }
        if(found) ans++;
    }
    cout<<ans<<endl;
}

int main(){
    IO;
    solve();
    return 0;
}