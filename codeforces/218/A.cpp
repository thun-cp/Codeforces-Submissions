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
    ll arr[2*n+1];
    for(ll i=0;i<=2*n;i++) cin>>arr[i];
    for(ll i=1;i<=2*n&&k>0;i+=2){
        if(arr[i]-arr[i-1]>1&&arr[i]-arr[i+1]>1){
            arr[i]--;
        k--;
        }
    }
    for(ll i=0;i<=2*n;i++) cout<<arr[i]<<' ';
}

int main(){
    solve();
}
