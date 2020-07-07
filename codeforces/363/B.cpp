#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[n+1];
    arr[0]=0;
    for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        arr[i]=arr[i-1]+a;
    }
    ll in=0,mi=LONG_MAX;
    for(ll i=k;i<=n;i++){
        if(arr[i]-arr[i-k]<mi){
            in=i;
            mi=arr[i]-arr[i-k];
        }
    }
    cout<<in-k+1<<endl;
}

int main(){
    solve();
}
