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
    if(n==1||n==2) cout<<0<<endl;
    else{
        ll k=1;
            for(ll i=n-2;i>=0;i--){
                if(arr[i]<arr[i+1]) break;
                k++;
            }
            for(ll i=n-k-1;i>=0;i--){
                if(arr[i]>arr[i+1])break;
                k++;
            }
       cout<<n-k<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
