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
    map<ll,ll> arr;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        arr[a]++;
    }
    ll q;
    cin>>q;
    unordered_set<ll> sq,rec;
    for(auto i:arr){
            if(i.second>=4) sq.insert(i.first);
            if(i.second>=2) rec.insert(i.first);
    }
    while(q--){
        char op;
        ll a;
        cin>>op>>a;
        if(op=='+') arr[a]++;
        else arr[a]--;
        if(arr[a]<2) rec.erase(a);
        if(arr[a]<4) sq.erase(a);
        if(arr[a]==2) rec.insert(a);
        if(arr[a]==4) sq.insert(a);
        ll found=1;
        if(sq.empty()||rec.empty()) found=0;
        else if(rec.size()==1){
            ll num1=arr[*begin(rec)];
            if(num1<8) found=0;
        }else if(rec.size()==2){
            ll num1=arr[*begin(rec)],num2=arr[*(++begin(rec))];
            if(num1<6&&num2<6&&num1>=4&&num2<4) found=0;
            else if(num1<6&&num2<6&&num2>=4&&num1<4) found=0;
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    IO;
    solve();
    return 0;
}