#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout<<4-s.size()<<endl;
}

int main(){
    solve();
}
