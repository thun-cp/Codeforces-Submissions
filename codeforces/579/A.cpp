#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll x;
    cin>>x;
    ll ans=0;
    while(x){
        if(x%2==1) ans++;
        x/=2;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
