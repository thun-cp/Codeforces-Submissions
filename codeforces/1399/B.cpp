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
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr1(n),arr2(n);
    ll cm=LONG_MAX,om=LONG_MAX;
    for(ll i=0;i<n;i++){
        cin>>arr1[i];
        cm=min(cm,arr1[i]);
    }
    for(ll i=0;i<n;i++){
        cin>>arr2[i];
        om=min(om,arr2[i]);
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll dif1=arr1[i]-cm,dif2=arr2[i]-om;
        ans+=max(dif1,dif2);
    }
    cout<<ans<<endl;
}

int main(){
    IO;
    cf
    solve();
    return 0;
}