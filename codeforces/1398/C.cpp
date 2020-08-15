#include "bits/stdc++.h"
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
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
ll arr[100005];
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=1;i<=n;i++){
        arr[i]=(s[i-1]-'0');
    }
    for(ll i=1;i<=n;i++){
        arr[i]+=arr[i-1];
        //cout<<inc[i]<<' ';
    }
    ll ans=0;
    for(ll i=0;i<=n;i++){
        for(ll j=i+1;j<=n;j++){
            ans+=ll(arr[j]-arr[i]==j-i);
        }
    }
    cout<<ans<<endl;
}

int main(){
    IO;
    cf
    solve();
    return 0;
}