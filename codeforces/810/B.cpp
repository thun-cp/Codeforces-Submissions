#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

bool comp(pair<ll,ll> p1,pair<ll,ll> p2){
    ll n1=min(2*p1.first,p1.second)-min(p1.first,p1.second);
    ll n2=min(2*p2.first,p2.second)-min(p2.first,p2.second);
    return n1>n2;
}

void solve(){
    ll n,f;
    cin>>n>>f;
    ll ans=0;
    vector<pair<ll,ll>> arr;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        arr.pb({a,b});
    }
    sort(arr.begin(),arr.end(),comp);
    for(ll i=0;i<n;i++){
        if(f>0) ans+=min(2*arr[i].first,arr[i].second),f--;
        else ans+=min(arr[i].first,arr[i].second);
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
