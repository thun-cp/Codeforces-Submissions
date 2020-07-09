#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n+1,0);
    for(ll i=1;i<=n;i++) cin>>arr[i];
    vector<ll> arr1=arr;
    for(ll i=1;i<=n;i++) arr[i]+=arr[i-1];
    sort(arr1.begin(),arr1.end());
    for(ll i=1;i<=n;i++) arr1[i]+=arr1[i-1];
    ll m;
    cin>>m;
    while(m--){
        ll t,l,r;
        cin>>t>>l>>r;
        if(t==1) cout<<arr[r]-arr[l-1]<<endl;
        else cout<<arr1[r]-arr1[l-1]<<endl;
    }
}

int main(){
    solve();
}