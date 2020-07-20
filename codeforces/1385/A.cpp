#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
#define F first
#define S second
#define codeforces ll tttt;cin>>tttt;while(tttt--)
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll x,y,z;
    cin>>x>>y>>z;
    ll a=1,b=min(x,z),c=min(y,z);
    ll mi;
    if(x==y) mi=x;
    else if(x==z) mi=x;
    else if(y==z) mi=y;
    set<ll> s={x,y,z};
    if(s.size()==3||mi<*s.rbegin()) cout<<"NO"<<endl;
    else cout<<"YES"<<endl<<1<<' '<<*s.begin()<<' '<<*s.rbegin()<<endl;
}

int main(){
    codeforces
    solve();
}
