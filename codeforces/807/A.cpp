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
    vector<pair<ll,ll>> arr;
    string rate="";
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        arr.pb({a,b});
        if(a!=b) rate="rated";
    }
    if(rate==""){
        auto arr1=arr;
        sort(arr1.begin(),arr1.end(),greater<pair<ll,ll>>());
        if(arr1==arr) cout<<"maybe"<<endl;
        else cout<<"unrated"<<endl;
    }else cout<<rate<<endl;
}

int main(){
    solve();
}
