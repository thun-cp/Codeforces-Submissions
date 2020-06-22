#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    ll arr[n][2];
    for(ll i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i][0]==arr[j][1]) ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
