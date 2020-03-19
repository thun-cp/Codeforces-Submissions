#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll n;
    cin>>n;
    ll b[n+5];
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>b[i];
    ll maxx=0;
    for(ll i=0;i<n;i++){
        a[i]=maxx+b[i];
        maxx=max(a[i],maxx);
    }
    for(ll i=0;i<n;i++) cout<<a[i]<<' ';
}
