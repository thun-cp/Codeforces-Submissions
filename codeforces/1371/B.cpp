#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll n,rr;
    cin>>n>>rr;
    ll ans=0;
    ll found=0;
    ll r=rr;
    if(rr>=n){
        ans+=1;
        r=n-1;
    }
    ans+=r*(r+1)/2;
    cout<<ans<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}
