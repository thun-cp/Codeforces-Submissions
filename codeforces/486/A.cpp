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
    ll num=ll(ceil(double(n)/2.0));
    if(n&1) cout<<-num<<endl;
    else cout<<num<<endl;
}

int main(){
    solve();
}
