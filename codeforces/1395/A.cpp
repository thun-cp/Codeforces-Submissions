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
    vector<ll> arr(4);
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    ll it=min(arr[0],min(arr[1],arr[2]));
    ll found=0;
    ll od=0,ev=0;
    for(auto i:arr){
        if(i==0) continue;
        if(i&1) od++;
        else ev++;
    }
    if(od<=1||od==4) cout<<"Yes"<<endl;
    else if(arr[0]&1&&arr[1]&1&&arr[2]&1) cout<<"Yes"<<endl;
    else if(od==3&&ev==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main(){
    IO;
    cf
    solve();
    return 0;
}