#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ld a,b,c;
    cin>>a>>b>>c;
    if(a>=c) cout<<-1<<' '<<ll(b)<<endl;
    else{
        if(c/b>=a) cout<<1<<' '<<-1<<endl;
        else cout<<1<<' '<<ll(b)<<endl;
    }
}

int main(){
    ll t;
    cin>>t;
    while(t--) solve();
}
