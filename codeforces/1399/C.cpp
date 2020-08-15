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
using namespace std;
typedef long long ll;
typedef long double ld;
int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
ll tc=1;
void solve(){
    ll n;
    cin>>n;
    map<ll,ll> arr;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        arr[a]++;
    }
    ll ans=0;
    for(ll sum=0;sum<105;sum++){
        map<ll,ll> temp=arr;
        ll ans1=0;
        for(auto i:temp){
            ll wi=i.first,co=i.second;
            if(2*wi==sum){
                ans1+=co/2;
                continue;
            }
            ll dif=min(co,temp[sum-wi]);
            ans1+=dif;
            temp[wi]-=dif;
            temp[sum-wi]-=dif;
        }
        ans=max(ans1,ans);
    }
    cout<<ans<<endl;
}

int main(){
    IO;
    cf
    solve();
    return 0;
}