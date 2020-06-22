#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++) cin>>arr[i];
    ll last=1;
    ll a=0,b=0;
    ll l=0,r=n-1;
    while(l<=r){
        ll ma=max(arr[l],arr[r]);
        if(last){
            a+=ma;
            last=0;
        }else{
            b+=ma;
            last=1;
        }
        if(arr[l]>arr[r]) l++;
        else r--;
    }
    cout<<a<<' '<<b<<endl;
}

int main(){
    solve();
}
