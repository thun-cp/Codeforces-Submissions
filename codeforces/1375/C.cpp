#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    if(arr[0]>arr[n-1]) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
