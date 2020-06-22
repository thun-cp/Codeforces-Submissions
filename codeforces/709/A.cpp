#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,b,d;
    cin>>n>>b>>d;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll ans=0;
    ll full=0;
    for(ll i=0;i<n;i++){
        if(arr[i]>b) continue;
        full+=arr[i];
        if(full>d){
            full=0;
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
