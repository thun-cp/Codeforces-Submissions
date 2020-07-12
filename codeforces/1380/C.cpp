#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ll ans=0;
    ll c=1;
    ll i=n-1;
    while(i>=0){
        if(arr[i]*c>=x){
            ans++;
            c=1;
        }else c++;
        i--;
    }
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
