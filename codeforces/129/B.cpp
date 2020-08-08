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
    ll n,m;
    cin>>n>>m;
    unordered_set<ll> arr[n+1];
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        arr[a].insert(b);
        arr[b].insert(a);
    }
    ll found=1;
    ll ans=0;
    while(found){
        found=0;
        vector<ll> toer;
        for(ll i=1;i<=n;i++){
            if(arr[i].size()==1){
                ll num=*arr[i].begin();
                //cout<<i<<' '<<num<<endl;
                arr[i].clear();
                toer.pb(i);
                found=1;
            }
        }
        for(ll i=1;i<=n;i++){
            for(auto j:toer) arr[i].erase(j);
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
