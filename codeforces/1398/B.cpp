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
    string s;
    cin>>s;
    vector<ll> arr;
    ll coun=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='1') coun++;
        if(s[i]=='0'&&coun>0){
            arr.pb(coun);
            coun=0;
        }
    }
    if(coun!=0) arr.pb(coun);
    sort(arr.begin(),arr.end(),greater<ll>());
    ll ans=0;
    for(ll i=0;i<arr.size();i+=2){
        if(i==arr.size()) continue;
        ans+=arr[i];
    }
    cout<<ans<<endl;
}

int main(){
    IO;
    cf
    solve();
    return 0;
}