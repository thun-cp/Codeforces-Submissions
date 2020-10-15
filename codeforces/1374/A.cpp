#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
using namespace std;
typedef long long ll;
typedef long double ld;

void solve(){
    ll x,y,n;
    cin>>x>>y>>n;
    ll z=n/x;
    if(n-z*x<y) z--;
    cout<<z*x+y<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--)
    solve();
}