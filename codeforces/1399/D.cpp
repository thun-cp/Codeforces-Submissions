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
    string s;
    cin>>n;
    cin>>s;
    set<ll> ci,co;
    vector<ll> ind(n);
    if(s[0]=='1') ci.insert(1);
    else co.insert(1);
    ind[0]=1;
    ll last=2;
    for(ll i=1;i<n;i++){
        ll num=s[i]-'0';
        if(num==1){
            if(co.empty()){
                ind[i]=last;
                ci.insert(last);
                last++;
            }else{
                ll in=*co.begin();
                ind[i]=in;
                co.erase(in);
                ci.insert(in);
            }
        }else{
            if(ci.empty()){
                ind[i]=last;
                co.insert(last);
                last++;
            }else{
                ll in=*ci.begin();
                ind[i]=in;
                ci.erase(in);
                co.insert(in);
            }
        }
    }
    cout<<last-1<<endl;
    for(auto i:ind) cout<<i<<' ';
    cout<<endl;

}

int main(){
    IO;
    cf
    solve();
    return 0;
}