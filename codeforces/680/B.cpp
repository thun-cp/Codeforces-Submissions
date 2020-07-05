#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,start;
    cin>>n>>start;
    start--;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll ans=0;
    ll dist=max(start+1,n-start);
    if(arr[start]) ans++;
    for(ll i=1;i<dist;i++){
        if(start-i>=0&&start+i<n){
            if(arr[start-i]&&arr[start+i]) ans+=2;
        }else if(start+i<n){
            if(arr[start+i]) ans++;
        }else if(start-i>=0){
            if(arr[start-i]) ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
