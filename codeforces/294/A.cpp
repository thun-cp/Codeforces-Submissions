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
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        a--;
        if(a>0){
            arr[a-1]+=b-1;
        }
        if(a<n){
            arr[a+1]+=arr[a]-b;
        }
        arr[a]=0;
    }
    for(ll i=0;i<n;i++) cout<<arr[i]<<endl;
}

int main(){
    solve();
}
