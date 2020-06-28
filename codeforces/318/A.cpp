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
    if(ll(ceil(n/2.0))==k){
        if(n&1) cout<<n<<endl;
        else cout<<n-1<<endl;
    }else if(k>n/2.0){
        k-=ll(ceil(ld(n)/ld(2.0)));
        cout<<k*2<<endl;
    }else{
        cout<<k*2-1<<endl;
    }
}

int main(){
    solve();
}
